/** Import Libs **/
#include <stdio.h>			// Standard I/O
#include <fcntl.h>			// Open
#include <unistd.h>			// Close
#include <termios.h>			// Serial Coms
#include <string.h>			// String Manipulation

/** Macro Var **/
#define SOH	0x01			// Start of Packet
#define	ACK	0x06			// Got It
#define NAK	0x15			// Didn't Get It
#define EOT	0x04			// End of Transmission
#define ETB	0x23			// EOT Block
#define DLY	2000000			// Delay for Device

/** Global Var **/
struct termios port;			// Configure Var
speed_t BAUD = B115200;			// Baud Rate
int cncOpen(char* dev, speed_t baud);	// Used to Open CNC Port
void cncSendXM(int fd, int file);	// Sends File over XMODEM
void testEcho(int fd);			// Testing Termios
const char verbose = 1;
const int CREATE = O_WRONLY | O_CREAT | O_TRUNC;

/** Main Thread **/
int main(int argc, char** argv) {
	// Open Port
	int fd = cncOpen(argv[1], BAUD);

	// Test Echo
	//testEcho(fd);	
	
	// Open File to Send
	
	int file = open(argv[2], CREATE);

	// Verify its Open
	if(file < 0) {
		printf("fileOpen: Openning File Failed!!!\n");
		return -1;
	}
	else 
		printf("fileOpen: Openning File Success.\nFile Descriptor Value: %d\n", file);

	// Send File XModem
	//cncSendXM(fd, file);

	// Get File XModem
	cncGetXM(fd, file);

	// Close
	close(fd);
	close(file);
}

/** Configuration & Open **/
int cncOpen(char* dev, speed_t baud) {
	// Open & Get File Descriptor
	int fd = open(dev, O_RDWR | O_NOCTTY);

	// Verify its Open
	if(fd < 0) {
		printf("cncOpen: Openning CNC Port Failed!!!\n");
		return -1;
	}
	else 
		printf("cncOpen: Openning CNC Port Success.\nFile Descriptor Value: %d\n", fd);

	// Get Default Config
	tcgetattr(fd, &port);

	// Set Baud Rate
	cfsetispeed(&port, baud);
	cfsetospeed(&port, baud);

	/** Set Specific Config (Black Magic) **/
	// Spell 1 
	/*
	port.c_cflag &= ~PARENB;
	port.c_cflag &= ~CSTOPB;
	port.c_cflag &= ~CSIZE;
	port.c_cflag |= CS8;
	port.c_lflag |= ICANON;
	*/

	// Spell 2
	port.c_cflag = (port.c_cflag & ~CSIZE) | CS8;
        port.c_iflag &= ~IGNBRK;         
        port.c_lflag = 0;        
        port.c_oflag = 0; 
        port.c_cc[VMIN]  = 1;  
        port.c_cc[VTIME] = 5;
        port.c_iflag &= ~(IXON | IXOFF | IXANY);
        port.c_cflag |= (CLOCAL | CREAD);
        port.c_cflag &= ~(PARENB | PARODD);
        port.c_cflag &= ~CSTOPB;
        port.c_cflag &= ~CRTSCTS;

	// Apply Config
	tcsetattr(fd, TCSANOW, &port);

	// Return File Desciptor
	return fd;
}

/** Parse File & Send Packet **/
void cncSendXM(int fd, int file) {
	// Give Device some Time
	usleep(DLY);

	// Block Num
	char block = 1;

	// Loop till END
	while(1) {
		/** Build Packet **/
		// Packet & Components
		char packet[132];
		char checkSum = 0;
		char end = 0;

		// Get Data & Calc CheckSum
		int i;
		for(i = 3; i < 131; i++) {
			// Read Byte by Byte
			int nbytes = read(file, &packet[i], 1);

			// EOF
			if(nbytes == 0) {
				packet[i] = 26;
				end = 1;
			}

			// Handle Error
			if(nbytes == -1)
				printf("cncSendXM: read() from File Failed!!!\n");

			// CheckSum
			checkSum += packet[i];
		}

		// Add CheckSum
		packet[131] = checkSum;

		// Add BlockNum
		packet[1] = block;
		packet[2] = 255 - block;

		// Add Start
		packet[0] = SOH;

		// Send till ACK
		char res = NAK;
		while(res != ACK) {
			// Send Packet 
			write(fd, packet, 132);

			// Response
			int nbyte = read(fd, &res, 1);

			// Handle Error
			if(nbyte == -1)
				printf("cncSendXM: read() form Device Failed!!!\n");
		}

		if(verbose) {
			printf("Block Num: %d\n", packet[1]);
			printf("Block Negative: %d\n", packet[2]);
			printf("CheckSum: %d\n", packet[131]);
			printf("Response: %d\n\n", res);
		}						

		// Increment Block Number
		block++;

		// Last Packet
		if(end)
			break;
	}

	// End Of Transmission
	char eot = EOT	 
	write(fd, &eot, 1);

	// Finished
	printf("File Sent\n");
}

/** Recieve & Print Packets **/
void cncGetXM(int fd, int file) {
	// Request File
	char nak = NAK;
	write(fd, &nak, 1);

	// Buffer & Read Var
	char* buf = (char*)malloc(256*sizeof(unsigned char)); 
	int n = 2;

	// Loop till End
	while(n > 1) {
		// Clear Buffer
		memset(buf, 0, 256*sizeof(char));

		// Read till SOH
		while(buf[0] != SOH && buf[0] != EOT && n > 0)
			n = read(fd, buf, 1);

		// Check if EOT
		if(buf[0] == EOT)
			break;

		// Read Packet
		int i;
		for(i = 1; i < 132 && n > 0; i++)
			n = read(fd, &buf[i], 1);
		
		// Set Bytes Read
		n = i; 

		// Compute Block Negative
		char blockN = 255 - buf[1];

		// Compute Check Sum
		char checkSum = 0;
		for(i = 3; i < 131; i++) {
			printf("%d\n", buf[i]);
			checkSum = checkSum + buf[i];
		}

		// Validate
		if(blockN == buf[2] && checkSum == buf[131]) { 
			// Print
			if(verbose) {
				printf("Block Num: %d\n", buf[1]);
				printf("Block Negative: %d\n", buf[2]);
				printf("CheckSum: %d\n", buf[131]);
			}

			// Write to File
			write(file, buf + 3, 128);

			// Send ACK
			char ack = ACK;
			write(fd, &ack, 1);
		}
		
		// Error
		else {
			// Print
			if(verbose)
				printf("Retrying\n\n");
		
			// Send NAK
			char nak = NAK;
			write(fd, &nak, 1);
		}
	}

	// Finished
	printf("File Recieved\n");
}

/** Test Code - Arduino Echo **/
void testEcho(int fd) {	
	// Give Arduino some Time
	usleep(DLY);

	// Send Message
	write(fd, "TEST MESSAGE: 1234567890!@#$%^&*()\n", 35);

	// Get Message
	char ret[36];
	int rbytes = read(fd, ret, 35);
	ret[35] = 0;

	// Handle Error
	if(rbytes == -1)
		printf("testEcho: read() Failed!!!");

	// Test Result
	if(!strcmp(ret, "TEST MESSAGE: 1234567890!@#$%^&*()\n"))
		printf("Arduino Test: PASSED.\n");
	else
		printf("Arduino Test: FAILED!!!\nMessage Recieved: %s\n", ret);
}




























