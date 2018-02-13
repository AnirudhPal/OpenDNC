# CS390 - Systems Independent Study

## Index

1. [**Definitions**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#definitions)

	* [*CNC*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#cnc)
	* [*Mill*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#mill)
	* [*Haas*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#haas)
	* [*Classic Control and Next Generation Control*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#classic-control-and-next-generation-control)
	* [*G-Code*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#g-code)
	* [*MDI, MEM, DNC and FNC*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#mdi-mem-dnc-and-fnc)
	* [*RS232*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#rs232)
	* [*Probing*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#probing)
	* [*WIPS*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#wips)
	* [*Macros*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#macros)
	* [*Macro Variables*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#macro-variables)
    
2. [**Objectives**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#objectives)

	* [*Open Source DNC*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#open-source-dnc)
	* [*Creative Applications*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#creative-applications)
	* [*Deeper Understanding*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#deeper-understanding)

3. [**XModem**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#xmodem)
	
	* [*Standard*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#standard)
	* [*Properties*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#properties)
	* [*Setup on CNC*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#setup-on-cnc)
    
4. [**CNC Serial**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#cnc-serial)

	* [*Code*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#code)
	* [*Termios.h*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#termiosh)
	* [*Control Flags*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#control-flags)
	* [*Arduino Testing*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#arduino-testing)

5. [**DPrint**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#dprint)

	* [*Loose Standard*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#loose-standard)
	* [*Hass Specific*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#haas-specific)
		* [Syntax](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#syntax)
		* [Example](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#example)

6. [**Surface Model**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#surface-model)

	* [*Procedure*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#procedure)
	* [*G65 / G54 / G00 / G91*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#g65--g54--g00--g91)
	* [*Snippet*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#snippet)
	* [*Data*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#data)

7. [**Networking**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#networking)

	* [*Setup*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#setup)
	* [*Local*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#local)
	* [*Remote*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#remote)
	* [*Hybrid*](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#hybrid)

8. [**Appendix**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#appendix)
9. [**Refrences**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#refrences)
10. [**Contact Information**](https://github.com/AnirudhPal/OpenDNC/blob/master/README.md#contact-information)

## Definitions

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
To provide some context to this document here is a list of definitions of common terms that are used throughout this report. This is in no way an exhaustive list of non-colloquial terms used in this document but should be sufficient for the purpose of presenting my findings.

### CNC

<p align="center">
<img src="https://www.haascnc.com/content/dam/haascnc/machines/vertical-mills/vf-series/models/small/vf-2ss/assets/VF2ss_RC_HERO.png/jcr:content/renditions/original.png" />
</p>

<p align="center">
Figure 1. Image of Haas VF2 Super Speed CNC mill.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
CNC is the acronym for computer numerical control which is used to refer to machines that are actuated by a computer executing a set of commands. Some common examples of such machines are shown above in figure 1. These machines form the basis of industrial automation and are now being introduced in the offices, schools and homes in form of 3D printers, mills and lathes. 

### Mill

<p align="center">
<img src="https://copperberg.com/wp-content/uploads/2016/09/ab83d719b659a6ba_org-700x466.jpg" />
</p>

<p align="center">
Figure 2. Image of Sankvik Shell Mill milling through cast iron alloy.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
In this context, a mill refers to a machine that has a rotating bit that is capable of moving/cutting independently on the three Cartesian axes. These machines are used for subtractive manufacturing by reducing a stock piece into a usable part. Although mills can be manual, we will focus on the CNC variant.

### Haas

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Haas Automation Incorporated is an American CNC manufacturer. All the testing and observation in this study were conducted on Haas VF4, DT1 and Simulator. All findings will apply to present and past Haas CNCs and with slight variation should apply to most industrial CNCs. 

### Classic Control and Next Generation Control

<p align="center">
<img src="https://service.haascnc.com/sites/default/files/Locked/3/Clear_offsets.jpg" />
</p>

<p align="center">
Figure 3. Image of Haas Classic Control in the work offsets menu.
</p>

<p align="center">
<img src="https://int.haascnc.com/images/whatsnew/NextGen-VPS1-lg_1033.jpg" />
</p>

<p align="center">
Figure 4. Image of Haas Next Generation Control in the VPS face milling menu.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Haas like many CNC manufacturers have a separate range of controllers for their machines. These controllers are paired with a CNC to provide the operator with a UI to interact with the machine. They currently have two variants; the Classic Control (CC) and the Next Generation Control (NGC). These two controls have different feature sets and some portions of my findings only apply to one of these controllers. In sections where this is true I will explicitly state which controller is under consideration. For context figure 3 shows a menu in both the controllers.

### G-Code

```
(Engraving);
( TEXT ENGRAVING: YOUR NAME );
( TOOL 5 / DEPTH .01 );
( SPINDLE 1000 RPM / FEED 10. IPM );
G00 G17 G40 G49 G50 G69 G80 G90;
T5 M06;
G0 G90 G54 X0.0000 Y0.0000 S1000 M03;
G43 Z1.0000 H5;
G47 E5.0000 F10.0000 I0.0000 J0.5000 P0 R1.0000 Z0.0100 (YOUR NAME);
G0 Z1.0000 M09;
G0 G90 G53 Z0 M05;
M01 ( END VPS ENGRAVING );
```

<p align="center">
Figure 5. G-Code generated on Haas NGC that performs and Engraving cycle.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
G-Code is a programming language that is commonly used in CNC Machines as stated in the definition of CNC. G-Code has variations based on machine being used and the manufacturer, so a code used in one machine is not always compatible with a machine of different make. I will cover small portions of G-Code when it is important for presenting my case. In figure 4, we can see a G-Code program that engraves a metal surface. G-Code source files have the extension *.nc. As a side note; 3D printers support a stripped-down version of G-Code and their source files have the extension *.gcode.

### MDI, MEM, DNC and FNC

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Haas Controllers support execution of G-Code in several different modes. Here are the various modes that are supported:

* Manual Data Input (MDI): A terminal like interface where code can be typed in and executed. The code does not persist in memory.
* Memory (MEM): In this mode code is loaded from the internal memory of the controller and modifications to the code will persist in memory.
* Direct Numerical Control (DNC): This is similar to MDI but the code instead of being typed in is fed through the ethernet or serial port. Blocks of code are loaded and executed. As a side note; the CNC controller freezes if the communication line is disrupted making this method a rather risky method of operation. A property of G-Code called ‘block look ahead’ seems to play a role in this behavior but I have not done any research to back this up.
* File Numerical Control (FNC): This is similar to MEM but the file is loaded from a USB Drive or Network Drive. It also suffers from the same risk as DNC. It is used in situation where the controllers built in storage is not capable of loading a large file. 

### RS232

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Most might know what RS232 Serial is, but for people my age RS232 is a serial communication standard which was common on PCs in the late 1900s. It has a bigger voltage delta between logical 1 and 0 making it the ideal choice for communicating with a CNC in a factory setup back in the day. Because of this all Haas CC CNCs come with RS232 DB25 port and it is available as an add-on for Haas NGC CNCs. The Haas controller acts as a data terminal equipment (DTE) and thus requires a null modem cable to talk to a PC. I used a USB to RS232 DB9 convertor attached to a DB9 to DB25 null modem cable for my testing. Apart from driver support all variations of this connection should work.

### Probing

<p align="center">
<img src="http://resources.renishaw.com/gen/download/omp60--34686" />
</p>

<p align="center">
Figure 6. Image of Reinshaw OMP60 Touch Triger Probe.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Probing in a CNC machine is the process of locating an object inside of the CNC machine. This is so that G-Code can be written with reference to an origin on the part being machined. There are several probing techniques and instruments but in this case, I used an Electronic Touch Trigger Probe, the TP7M from Renishaw PLC with a ceramic stem and a ruby tip. It has an accuracy of up to 0.00002in. 

### WIPS

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
WIPS is the acronym for Wireless Intuitive Probing System. This is a Haas feature which provides a menu based procedure for probing. The system generates arguments for a set of subroutines that perform probing. I will be using one such subroutine in a future section. Since these subroutines are stored as programs in system memory one should never write a 9000 or 8000 series program as these subroutines use that denomination.

### Macros

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Macros are subroutines that are built into a CNC controller. They generally control more advanced operations and are not easily programmable by the used. These can include homing cycles, calibration, probing etc.

### Macro Variables

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Macro variables are a fixed list of variables that are available to a macro for doing computation. These variable act as temporary storage spaces while performing arithmetic or store offsets and sizes for later use.

## Objectives

### Open Source DNC

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
There are several features of a Haas CNC that requires an external software to be exploited. These software packages often referred to as ‘DNC software’ are installed on PCs connected to the CNC. The problem with DNC software is that they are expensive, poorly maintained and outdated due the market being very niche and clients relying on training from the software provider to use the software. One of the objectives of my study is to explain how these features work and provide methods for developing opensource solutions.

### Creative Applications

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Another byproduct of this could be the development of creative tools that use a combination of existing features to develop new features that the machine can perform. One such application will be discussed in a later section. This allows for applications that even the manufacturer of the CNC didn’t foresee, assuming people actually develop these solutions. 

### Deeper Understanding

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
I have been working with these machines for a while. As an operator, I have learned quite a bit about work-holding, machining strategies, design for manufacturing and maintenance. This study helped me understand the software aspect of such systems. I was able to do things with machines that I previously didn’t consider possible. I also discovered a lot of new things about these machines. This document serves as an account for what I did and hopefully will be used by other for further development and research. 

## XModem

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
XModem is a serial file transfer protocol developed and used in the late 1900s, the same period as the popularity of RS232. Therefore, it is a standard feature on all Haas CNCs. However, without a serial port it is useless. So, all the material in this section and the next applies to Haas CC CNC and might apply to Haas NGC CNC with a serial port add-on. There are currently several variants of XModem which were improvements on the original protocol, but the CNC uses the original protocol.

### Standard

|Sender|Direction|Reciever|
|-|:-:|-:|
|Waiting for NAK|&larr;|NAK|
|Packet 1|&rarr;|Waiting for packet|
|Waiting for ACK||Error detection (no error)|
|Waiting for ACK|&larr;|ACK|
|Packet 2|&rarr;|Waiting for packet|
|...|...|...|
|Packet n|&rarr;|Waiting for packet|
|Waiting for ACK||Error detection (no error)|
|Waiting for ACK|&larr;|ACK|
|EOT|&rarr;|Waiting for packet|
|Finished||Remove SUB characters and build the file|

<p align="center">
Figure 7. Table of XModem Interactions.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
In this protocol, the sender waits for a trigger from the receiver. Generally it will wait for a trigger for a set period and then timeout. Upon receiving the trigger the sender starts to transmit packets and for every packet it waits for an acknowledgement from the receiver. If the acknowledgement is not received or a no-acknowledgement is received the sender will resend the packet. Most implementations have a limit for number of consecutive resends after with the transmission will fail. If the sender receives an acknowledgement it sends the next packet. When done, the sender can issue an end of transmission.

|Bytes|1 byte|1 byte|1 byte|128 bytes|1 byte|
|:-:|:-:|:-:|:-:|:-:|:-:|
|**Label**|Start|Block Number|Block Negative|Data|Checksum|
|**Characters in ASCII**|SOH or 1 or 0x01|0 – 255 or 0x00 – 0xFF|0 – 255 or 0x00 – 0xFF|N/A|N/A|
|**Purpose**|Indicates start of packet. Probably used to deal with noise during no transmissions.|Number of the packet.|255 minus the number of the packet.|File data.|Sum of all data bytes modulus 256.|

<p align="center">
Figure 8. Table of XModem Packet Components.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The packet consists of the following:

* Start Byte: This is just a single byte with the ASCII character SOH (0x01). It indicates the start of the packet.
* Block Number: This is also a single byte. It is used to tag a packet with a number. The number starts at 1 and goes up to 255. After 255 it wraps around to 0.
* Block Negative: It is also a single byte. It can be computed as block number subtracted from 255. It is used as a rudimentary form of error detection.
* Data: 128 bytes in the packet are allocated for data. Basically, a file is divided into sections containing 128 bytes each. The ASCII character SUB (0x1A) is used for padding.
* Checksum: The last byte of the packet is a check sum. It is a summation of all the data bytes. This is the primary method of error detection in this protocols and later iterations improved on this section of the protocol.

### Properties

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
One of the peculiar attributes to consider while working with XModem on a Haas CC CNC is the internal handling of End of Block. In G-Code LF is represented with semicolon ‘;’ symbol. Further complicating this; you can decide to change what ‘;’ in G-Code means using setting number 25 on the controller. You can choose between LF Only, CR Only, CRLF, CRCR and LFLF. Although this decides the ASCII character that is sent in the packet, but the computed checksum always uses LF for computation. So, it is best to leave this setting on ‘LF Only’.

### Setup on CNC

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Use the figures below for configaration of the CNC Controller.

<p align="center">
<img src="https://diy.haascnc.com/sites/default/files/Locked/2/modem-sttngs.jpg" />
</p>

<p align="center">
Figure 9. Image of I/O Settings Menu on a Haas CC.
</p>

|Setting Number|Setting Label|Setting Value|Purpose|
|:-:|:-:|:-:|:-:|
|11|BAUD RATE SELECT|115200|Any baud rate can but I recommend going with fastest preset. cfsetispeed() and cfsetospeed() has to be used on the PC for setting different baud rates.|
|12|PARITY SELECT|NONE|Controls parity. You can use even or odd parity as long as the c_flags are configured with PARENB or PARODD.|
|13|STOP BIT|A|Can select A or B. You have to set the c_flags with CSTOPB or CSTOPA.|
|14|SYNCHRONIZATION|XMODEM|There are other options but this is the most reliable method of file transmission.|
|37|RS-232 DATA BITS|8|No reason to change this.|
|24|LEADER TO PUNCH|NONE|I would love to know why this setting is there.|
|25|EOB PATTERN|LF ONLY|I discussed this above but stick to this setting.|

<p align="center">
Figure 10. Table of Settings to use.
</p>

## CNC Serial

### Code

```c
/** Import Libs **/
#include <stdio.h>			// Standard I/O
#include <fcntl.h>			// Open
#include <unistd.h>			// Close
#include <termios.h>			// Serial Coms
#include <string.h>			// String Manipulation
```

<p align="center">
Figure 11. Importing all Neccessary Libs.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Most of them are standard libraries that are used in almost all C files but the intresting one is termios.h. A brief description about this can be found in a later section. It is used to configure the Serial Port so we can interact with it through a file descriptor.

```c
/** Macro Var **/
#define SOH	0x01			// Start of Packet
#define	ACK	0x06			// Got It
#define NAK	0x15			// Didn't Get It
#define EOT	0x04			// End of Transmission
```

<p align="center">
Figure 12. Defining usefull Constants.
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
These are some of the common ASCII characters used during XModem file transfer.

```c
/** Global Var **/
struct termios port;					// Configure Var
speed_t BAUD = B115200;					// Baud Rate
int cncOpen(char* dev, speed_t baud);			// Used to Open CNC Port
void cncSendXM(int fd, int file);			// Sends File
void cncGetXM(int fd, int file);			// Recieve File
const int CREATE = O_WRONLY | O_CREAT | O_TRUNC;	// Create a File
```

<p align="center">
Figure 13. Global Variable declaration. 
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The variable *port* is used to store the configurations for the serial port. *BAUD* sets the rate of serial communication. The function declaration are there to avoid warnings during compilation. 

```c
/** Configuration & Open **/
int cncOpen(char* dev, speed_t baud) {
	// Open & Get File Descriptor
	int fd = open(dev, O_RDWR | O_NOCTTY);

	// Get Default Config
	tcgetattr(fd, &port);

	// Set Baud Rate
	cfsetispeed(&port, baud);
	cfsetospeed(&port, baud);

	/** Set Specific Config **/
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
```

<p align="center">
Figure 14. Function to Open Serial Port. 
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The function recieves a filepath corresponding to the connected serial device and a baud rate. It opens the filepath and aquire it current configuration using *tcgetattr()*. Then it sets the baud rate for both input and output by using functions *cfsetispeed()* and *cfsetospeed()*. After that the function sets up the control flags. Details about the control flag are a little complicated and can be looked up in the man pages. They are set through bitwise operations. Finally the configuration changes are applied using *tcsetattr()* and a file descriptor is returned.

```c
/** Parse File & Send Packet **/
void cncSendXM(int fd, int file) {
	// Read till NAK
    char start = ACK;
    int n = 1;
	while(start != NAK && start != EOT && n > 0)
		n = read(fd, start, 1);

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
}
```

<p align="center">
Figure 15. Function to Send a File. 
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The functions starts by waiting for a NAK from the device. After that it enters a loop that only breaks when the entire file has been parsed and sent. It builds each packet by aquiring the data from the file. It also pads with SUB when the file is completely read. Then it adds start, block number, block negative and checksum. This packet is sent to the device. Once completed it send EOT message to the device. This function needs to be extended to handle errors but should work for the most part. 

```c
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
		for(i = 3; i < 131; i++)
			checkSum = checkSum + buf[i];

		// Validate
		if(blockN == buf[2] && checkSum == buf[131]) { 
			// Write to File
			write(file, buf + 3, 128);

			// Send ACK
			char ack = ACK;
			write(fd, &ack, 1);
		}
		
		// Error
		else {
			// Send NAK
			char nak = NAK;
			write(fd, &nak, 1);
		}
	}
}
```

<p align="center">
Figure 16. Function to Recieve a File. 
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
To get a file the function starts by broadcasting a NAK. It allocates a buffer that is used repeatedly by each packet. It then enters a loop that only exits upon recieving an EOT from the device. The first thingit does is clearing the buffer. Then it waits for a SOH. After this it fills the buffer. Looping instead of filling the buffer at once gives the device enough time to transmit the entire packet. Then the packet is stripped down into its componenets and checked for errors. If an error occurs the same packet is requested with a NAK command. If not the data is added to the file and an ACK sent to the device. This function needs to be extended to handle errors but should work for the most part.

### Termios.h

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
One of the biggest hurdles was understanding termios. Termios from what I understand is an API for interacting with terminal input and output. It is used to configure the link between process and the I/O. For example, it is used in shell programs like bash for echoing everything you type so it can be displayed on the screen. It is what allows editing of what has already been typed onto the screen and also not echo passwords that are typed. The same API is used to connect to serial ports on the system.

### Control Flags

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The control flags in termios control the configuration of a link. This is what has to be manipulated to support multiple configurations between the PC and the CNC. For example, my implementation only supports 8-bit character size mask but one could modify CS8 in the flags to CS5, CS6 or CS7 if they were dealing with characters of different sizes. Haas CC CNCs support 512 different configurations for the serial port not including the baud rates. Thus, I decided only to focus on one particular configuration.

### Arduino Testing

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
I used an Arduino UNO with an Adafruit Micro SD Card Breakout for some of the testing. Please find the source and the wiring diagram below. It was quite useful being able log and emulate a CNC Controller in Arduino for initial development.

```cpp
/** Import Libraries **/
/** 
 *  Both Libraries are used to talk with the SD Card. The 
 *  MCU actually talks directly with the SD Card. The SD 
 *  breakout only provides breadboard friendly pins and does
 *  level shifting between 3.3V <-> 5.0V. 
 **/
#include <SPI.h>
#include <SD.h>   

/** Macro Variables **/
// XMODEM COM VARS
#define ACK   0x06
#define NAK   0x15
#define SOH   0x01
#define EOT   0x04

// SD VARS
#define CS    0x0A

// SERIAL VARS
#define BAUD  115200
#define TOUT  1000
#define SIZE  132

/** Global Variables **/
// PACKET BUFFER
char buf[SIZE];
char curBLK;

void setup() {
  // Start Serial @ 9600
  Serial.begin(BAUD);

  // Set Time Out
  //Serial.setTimeout(TOUT);

  // Initialize SD Card
  if(!SD.begin(CS))
    Serial.println("SD Error!!!");

  // Start Transmission
  Serial.write(NAK);
}

void loop() {
  // Loop if Data Available
  if(Serial.available()) {
    // Read Response up to 132b
    Serial.readBytes(buf, SIZE);

    // File Open
    File dataFile = SD.open("datalog.txt", FILE_WRITE);
    if(dataFile != 1)
      Serial.println("File Error!!!");
    
    // Dump Content
    plainDump(dataFile, 1);

    // Packet Report
    //packetReport(dataFile);

    // Generate File
    //constructFile(dataFile);

    // File Close
    dataFile.close();
  }
}

/** Produces Dump **/
void plainDump(File fd, bool dec) {
  // Decimal Dump
  if(dec) {
    // Space
    fd.println();
    fd.println();
    
    // Print Prompt
    fd.println("Decimal Dump:");
    
    // Print all Bytes as Unsigned Decimal
    for(int i = 0; i < 132; i++) {
      // Newline every 10 lines
      if(i%10 == 0)
        fd.println();

      // Get Byte
      byte b = buf[i];

      // Print as Decimal & Tab
      fd.print(b, DEC);
      fd.print("\t");
    }
  }

  // Plain Dump
  else {
    // Print Data AS IS
    fd.println("Data Dump:");
    fd.print(buf);    
  }

  // Aknowledge Reception
  Serial.write(ACK);
  Serial.write(EOT);
}

/** Produces Packet Report **/
void packetReport(File fd) {
  /** Split Packet **/
  // Get Block Number
  byte blockNum = buf[1];

  // Get Block Number Complement (255-Block No:)
  byte blockNumN = buf[2];

  // Get Data as String
  String data = "";
  for(int i = 3; i < 131; i++)
    data += buf[i];

  // Get CheckSum
  byte checkSum = buf[131];
  
  // Compare Block Number
  String numCheck = "FAILED";
  if((255 - blockNum) == blockNumN)
    numCheck = "PASSED";

  // Compare CheckSum
  String sumCheck = "FAILED";
  byte calcSum = 0;
  for(int i = 3; i < 131; i++)
    calcSum += buf[i];
  if(calcSum == checkSum)
    sumCheck = "PASSED";

  // Print Results
  fd.println("================================ Packet Report ===================================");
  fd.print("Block Number: ");
  fd.println(blockNum, DEC);
  fd.print("Block Number Complement: ");
  fd.println(blockNumN, DEC);
  fd.print("CheckSum: ");
  fd.println(checkSum, DEC);
  fd.print("Block Number Test: ");
  fd.println(numCheck);
  fd.print("CheckSum Test: ");
  fd.println(sumCheck);
  fd.println("Data: ");
  fd.println(data);
  fd.println("===================================== End ========================================");

  // Aknowledge Reception
  Serial.write(ACK);
  Serial.write(EOT);
}

/** Gets the File **/
void constructFile(File fd) {
  /** Split Packet **/
  // Get Block Number
  byte blockNum = buf[1];

  // Get Block Number Complement (255-Block No:)
  byte blockNumN = buf[2];

  // Get Data as String
  String data = "";
  for(int i = 3; i < 131; i++)
    data += buf[i];

  // Get CheckSum
  byte checkSum = buf[131];

  // Compare Block Number
  if(blockNum == curBLK) {
    // Aknowledge Reception
    Serial.write(ACK);
    Serial.write(EOT);
    return;
  }

  curBLK = blockNum;
  
  // Compare Block Number Negative
  if((255 - blockNum) != blockNumN) {
    // Aknowledge Reception
    Serial.write(NAK);
    Serial.write(EOT);
    return;
  }

  // Compare CheckSum
  byte calcSum = 0;
  for(int i = 3; i < 131; i++)
    calcSum += buf[i];
  if(calcSum != checkSum) {
    // Aknowledge Reception
    Serial.write(NAK);
    Serial.write(EOT);
    return;
  }

  // Output Data
  fd.print(data);

  // Aknowledge Reception
  Serial.write(ACK);
  Serial.write(EOT);
}
```

<p align="center">
Figure 17. Arduino Source used for testing and emulation. 
</p>

<p align="center">
<img src="https://cdn-learn.adafruit.com/assets/assets/000/009/892/medium800/adafruit_products_microsdwiring.jpg?1396899097" />
</p>

<p align="center">
Figure 18. Wiring the SD card to the Arduino. 
</p>

## DPrint

### Loose Standard

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
DPrint is a loose standard that is supported in several CNCs included most made by Haas, Fanuc, Yasnac, Mazak and Mitsubishi. It is a G-Code macro for broadcasting messages on the serial port. It can be used to print macro variable and status reports. It was designed to be used in conjunction with a serial printer but nowadays not a whole lot of people know that the feature even exits on their CNCs. 

### Hass Specific

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
For Haas CC and NGC CNCs one has to ensure macros are in enabled in the parameters page of the machine. After that the settings menu can be used to select baud rate of transmission. Unlike other manufacturers, Hass doesn’t require a serial port open/close command and instead always has the serial port open. The Haas CC CNCs are only capable of sending DPrint output to the serial port. The NGC can do that as well as output it to a file or/and the ethernet port. Here is the syntax and an example:

#### Syntax

> DPRNT [&lt;message&gt;#&lt;macro variable number&gt;[&lt;digits before decimal&gt;&lt;digits after decimal&gt;];

#### Example

> DPRNT[Z Offset is #5223[44]];

## Surface Model

### Procedure

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
In this sections I discuss one of the applications of DPrint that I tested. So, imagine a scenario where you need the surface topography of a given sample. Traditionally you would need a specialized instrumentation to perform multipoint measurements on a given sample. These instruments are quite expensive and are often only found in advanced fabrication labs. Now most mid-range CNCs usually have built in probing for locating a workpiece. They come with subroutines for perform basic probing cycles. One can use this feature to perform the above task without ever requiring more instrumentation. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Since my experimentation was on a Haas NGC DT1 CNC, let’s discuss how one can achieve this for any Haas CNC with WIPS. Haas CNCs come with WIPS as a common add-on. WIPS is designed for basic probing like bore, boss, corner, single surface etc. The probing menu on a NGC as well as a CC controller uses the G65 subroutine internally to perform this operation. We can use single surface Z axis probe on multiple locations to get the surface topography. Since the G54 Z offset stored in macro variable #5223 is overwritten every time G65 is run, we can use DPrint to output this value and store it in a file using a PC connected to the serial or ethernet port.

### G65 / G54 / G00 / G91

### Snippet

```
G65 P9995 W54. A20. H-1.;
DPRNT[#5223[44]];
G00 G91 X.5;
```

<p align="center">
Figure 19. Snippet of Custom Grid Probing Cycle. 
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The above is a snippet of the G-Code that was used to achieve this. I have deliberately chosen not to include the entire code. This is because the probe is often the most expensive component of a CNC machine, and running this code without understanding it can be dangerous and quite expensive if anything goes wrong. I encourage further research before attempting to perform this yourself. Also, you can always contact me for more information.

```c
/** DPrint **/
void cncDPrint(int fd) {
	// Allocate
	char* dump = (char*)malloc(256*sizeof(char));

	// Loop for Input
    while(1) {
    	// Clear Dump
        memset(dump, 0, 256*sizeof(char));
        
        // Read
        read(fd, dump, 256);

		// Print
        printf("Recieved: %s\n\n", dump);
	}
    
	// Free
    free(dump);
}
```

<p align="center">
Figure 20. DPrint function for CNC Serial. 
</p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The following function can be added to CNC Serial so you can read DPrint statements. All you do is read a large block and then allocate memory for whatever you were able to read. The *read()* function returns the number of bytes it actually read from the port.

### Data

<p align="center">
<img src="https://lh3.googleusercontent.com/mKYUa2aEQbfTDs6Sfg-Z5saCgmmlDar9s0eFThNVS_-3DX2GJCFxGjBcUTp0cmbipWw7BWh2PDWlQnIQVzTvNUxuQMdB4jSIliP3Lj4QxAdAYBOnp4qU-dYf7Raymy7A5qMVzElGh4IpP_RDtYEnnmM6HaSjSJkxD_v-B2YRm75PL5yOh8_bztkoMsRo2nlj7wHypYKckAtU8hi2QG8IcQZRg7Z3W_UeQ5M4CKxaGmzqLQX1iJeQjeUTXHuYXjkGEXuj57s4ZFgx8oCTfRVuTCNdNE2-2QyKBm-GwFvX4pdfI5OB-tukzc62IaPsWkdK660pY8fDSunP2O45vbAToz7QMOugP_VatAMKQd2jR0HayV_DGgVtnCQcT4vk6QUu6befrEG4I087Rhugl9ejBii-rxoWKkABk7d_R_KT9a76kJwFmakFPIdiZaj-rYGuEVtUqyOQ1jL-DJc2njj4xHK4ZcyFZWFXE_ebe4oUO5I1P0-leWDJ6EOUysc0YcXBqfSWwiV8y41-Bap52JzpGjgHeBXpgaQTSsTpDNpnlvVd9bHZzsR3Vbvdfm6suTFKnp21wJ6941-BfZqaOdfB61WJcljPufnp81BZOQK4Qh1le2xojDbfm8QeiW0ZuKMHskBus27qwK7XmPWTlGbBw-Jb6m3cw7TS1j8=w1302-h331-no" />
</p>

<p align="center">
Figure 21. Z Height Data for 100 Points on a Grid.
</p>

<p align="center">
<img src="https://lh3.googleusercontent.com/jYFgeLDZxQupTLY0RsMlofJnt3mDGpxUweh-jjKnCuPlLirpU-ULvtr30tFdurcMoT03Ol1zpzygaDSSMQWTNtJemljG_Y6JrOrFhWb_UHqYgy4aiC5Qtjt-0srUbxaXRHKoPP3MuMLXa8unzA1ATd3ezrZso9t7E2q2CA5SgKpHz7-8fzqW3jIRcsBGH5k4se1qiYmJbZaDZglaTMoV-iDXZnxmM5WK74sgqcG0iEYKIUi69ONYPUaA_EOYXlNojgfy_bzPkXtFYa8Q4Awi0DUwbhV56ZBnh5ULH71UZmnITcjNjsW-Y2qyvUBoudH_RGTJWxpo6bSPQ_3d_fcGlem4h7CtmUfb3OUOyvyXVSg5tORes-qMtF3WdfJAN3o4cWxauMDD6GLssU_PWxIrt9ovatMD2IP0TxkShlhhBGtLDVOzYnIhiFvIZr1XYitJQX7LK1g3d0DQwEsVt0TuxD3oBpvsh5JdRrk9uTr9h_ToyUifyfEVHAed518TKPkpflG9QNwUS1Bx7ZjNiutlD3ncrZd1npgjmwgR_vw_q-JDX548gLxaJuSMQ8ES4J_sf1PjJfOeLDSywur7u7XkrrYH28JOgHkWBHE_i3E4OuEG0KaF-0-lUPUvLBw69JH_bF8qgwpRd4NrLgtHdfV7u1pxZCovnFk6oUY=w974-h501-no" />
</p>

<p align="center">
Figure 22. Surface Graph of the above Data. 
</p>

## Networking

### Setup

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
With the launch of the NGC, the ethernet port has becopme the primary method of commucation with the controller. A lot of the features discussed above are also available through the ethernet port. There are some newer features that the ethernet port supports that the serial port never could. In this section I will give a brief description of said features. This section will not cover the 'how' since Haas has a good amount of literature on the topic. Also, most of these concepts are only applicable for the NGC. One thing that is not covered in the literature is that you dont have to assign static local IP to the machine, one can set the machine to aquire an IP from the DHCP server. If a DNS server is also explicitly defined then the machine can also be given a hostname. In our lab setup the hostname is pair with the MAC adress to route to the correct IP that is assigned. It is also a good idea not to expose the machine to the open Internet since it has support for overwriting macro variables over the network. Keep in mind that the controller is controlling a multiple horsepower industrial equipment. 

### Local

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Local Net Share is a network configuration in which the internal storage of machine can be made available over the network. It is not explicitly stated anywhere but I think it is CIFS Samba Share. I was able to mount it and use it as if it were a standard SMB. This can be used for a file drag and drop system where you can drop the files you want to run into the mounted folder on a PC and run it at the machine. 

### Remote

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Remote Net Share is another configuration in which you can mount an Samba Share onto the machine. This can be a network drive, NAS or any storage attached to the same network. You can run from the network storage directly but it is not suitable as discussed in the FNC section in Definitions. One advantage is that if you have a single storage drive and all machines are connected to the same storage then any file placed in that storage is accessable in all the machines.  

### Hybrid

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Remote and Local Shares have pros and cons but the good thing is you can run both of them at the same time. You can design a system where files dropped onto the NAS will be pushed to all the CNC's local storage and at the end of the day removed and archived. Also files generated on the machine directly can also be sent to the NAS. The NAS and the machines can be isolated in a private subnet and a server can act as connection to the NAS to upload and download files from the rest of the network or the Internet.

### Appendix

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
The following blocks are the raw data of interaction between the CNC and Computer using a Serial Sniffer.

```
[30/10/2017 10:27:11] Written data (COM2)	
    15                                                .               	
[30/10/2017 10:27:21] Written data (COM2)	
    15                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 01 fe 0a 25 0a 4f 30 35 35 35 35 28 43 53 33   ..þ.%.O05555(CS3	
    39 30 5f 54 65 73 74 5f 4e 43 29 0a 28 55 73 69   90_Test_NC).(Usi	
    6e 67 20 47 30 20 77 68 69 63 68 20 74 72 61 76   ng G0 which trav	
    65 6c 73 20 61 6c 6f 6e 67 20 64 6f 67 6c 65 67   els along dogleg	
    20 70 61 74 68 2e 29 0a 28 54 31 20 44 3d 32 2e    path.).(T1 D=2.	
    20 43 52 3d 30 2e 20 2d 20 5a 4d 49 4e 3d 2d 30    CR=0. - ZMIN=-0	
    2e 31 32 35 20 2d 20 66 61 63 65 20 6d 69 6c 6c   .125 - face mill	
    29 0a 28 54 33 20 44 3d 30 2e 35 20 43 52 3d 30   ).(T3 D=0.5 CR=0	
    2e 20 2d 98                                       . -˜            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 02 fd 20 5a 4d 49 4e 3d 2d 31 2e 31 32 35 20   ..ý ZMIN=-1.125 	
    2d 20 66 6c 61 74 20 65 6e 64 20 6d 69 6c 6c 29   - flat end mill)	
    0a 4e 31 30 47 39 30 47 39 34 47 31 37 0a 4e 31   .N10G90G94G17.N1	
    35 47 32 30 0a 4e 32 30 47 35 33 47 30 30 5a 30   5G20.N20G53G00Z0	
    2e 0a 0a 28 46 61 63 65 33 29 0a 4e 33 30 54 31   ...(Face3).N30T1	
    4d 30 36 0a 4e 33 35 53 36 35 30 30 4d 30 33 0a   M06.N35S6500M03.	
    4e 34 30 47 35 34 0a 4e 34 35 4d 30 38 0a 4e 36   N40G54.N45M08.N6	
    30 47 30 30 58 35 2e 36 37 35 59 30 2e 33 31 34   0G00X5.675Y0.314	
    37 0a 4e 26                                       7.N&            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 03 fc 36 35 47 34 33 5a 31 2e 48 31 0a 4e 37   ..ü65G43Z1.H1.N7	
    30 54 33 0a 4e 37 35 47 30 30 5a 30 2e 35 0a 4e   0T3.N75G00Z0.5.N	
    38 30 47 30 31 5a 30 2e 31 37 35 46 36 35 2e 0a   80G01Z0.175F65..	
    4e 38 35 47 31 38 47 30 33 58 35 2e 34 37 35 5a   N85G18G03X5.475Z	
    2d 30 2e 30 32 35 49 2d 30 2e 32 4b 30 2e 0a 4e   -0.025I-0.2K0..N	
    39 30 47 30 31 58 34 2e 33 37 35 0a 4e 39 35 58   90G01X4.375.N95X	
    30 2e 0a 4e 31 30 30 47 31 37 47 30 32 59 31 2e   0..N100G17G02Y1.	
    36 31 30 33 49 30 2e 4a 30 2e 36 34 37 38 0a 4e   6103I0.J0.6478.N	
    31 30 35 41                                       105A            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 04 fb 47 30 31 58 34 2e 33 37 35 0a 4e 31 31   ..ûG01X4.375.N11	
    30 47 30 33 59 32 2e 39 30 36 49 30 2e 4a 30 2e   0G03Y2.906I0.J0.	
    36 34 37 38 0a 4e 31 31 35 47 30 31 58 30 2e 0a   6478.N115G01X0..	
    4e 31 32 30 47 31 38 47 30 33 58 2d 30 2e 32 5a   N120G18G03X-0.2Z	
    30 2e 31 37 35 49 30 2e 4b 30 2e 32 0a 4e 31 32   0.175I0.K0.2.N12	
    35 47 30 30 5a 30 2e 35 0a 4e 31 33 30 58 2d 31   5G00Z0.5.N130X-1	
    2e 33 59 30 2e 33 31 34 37 0a 4e 31 33 35 47 30   .3Y0.3147.N135G0	
    31 5a 30 2e 31 32 35 46 36 35 2e 0a 4e 31 34 30   1Z0.125F65..N140	
    47 30 32 fe                                       G02þ            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 05 fa 58 2d 31 2e 31 5a 2d 30 2e 30 37 35 49   ..úX-1.1Z-0.075I	
    30 2e 32 4b 30 2e 0a 4e 31 34 35 47 30 31 58 30   0.2K0..N145G01X0	
    2e 0a 4e 31 35 30 58 34 2e 33 37 35 0a 4e 31 35   ..N150X4.375.N15	
    35 47 31 37 47 30 33 59 31 2e 36 31 30 33 49 30   5G17G03Y1.6103I0	
    2e 4a 30 2e 36 34 37 38 0a 4e 31 36 30 47 30 31   .J0.6478.N160G01	
    58 30 2e 0a 4e 31 36 35 47 30 32 59 32 2e 39 30   X0..N165G02Y2.90	
    36 49 30 2e 4a 30 2e 36 34 37 38 0a 4e 31 37 30   6I0.J0.6478.N170	
    47 30 31 58 34 2e 33 37 35 0a 4e 31 37 35 47 31   G01X4.375.N175G1	
    38 47 30 1c                                       8G0.            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 06 f9 32 58 34 2e 35 37 35 5a 30 2e 31 32 35   ..ù2X4.575Z0.125	
    49 30 2e 4b 30 2e 32 0a 4e 31 38 30 47 30 30 5a   I0.K0.2.N180G00Z	
    30 2e 35 0a 4e 31 38 35 58 35 2e 36 37 35 59 30   0.5.N185X5.675Y0	
    2e 33 31 34 37 0a 4e 31 39 30 47 30 31 5a 30 2e   .3147.N190G01Z0.	
    30 37 35 46 36 35 2e 0a 4e 31 39 35 47 30 33 58   075F65..N195G03X	
    35 2e 34 37 35 5a 2d 30 2e 31 32 35 49 2d 30 2e   5.475Z-0.125I-0.	
    32 4b 30 2e 0a 4e 32 30 30 47 30 31 58 34 2e 33   2K0..N200G01X4.3	
    37 35 0a 4e 32 30 35 58 30 2e 0a 4e 32 31 30 47   75.N205X0..N210G	
    31 37 47 23                                       17G#            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 07 f8 30 32 59 31 2e 36 31 30 33 49 30 2e 4a   ..ø02Y1.6103I0.J	
    30 2e 36 34 37 38 0a 4e 32 31 35 47 30 31 58 34   0.6478.N215G01X4	
    2e 33 37 35 0a 4e 32 32 30 47 30 33 59 32 2e 39   .375.N220G03Y2.9	
    30 36 49 30 2e 4a 30 2e 36 34 37 38 0a 4e 32 32   06I0.J0.6478.N22	
    35 47 30 31 58 30 2e 0a 4e 32 33 30 47 31 38 47   5G01X0..N230G18G	
    30 33 58 2d 30 2e 32 5a 30 2e 30 37 35 49 30 2e   03X-0.2Z0.075I0.	
    4b 30 2e 32 0a 4e 32 33 35 47 30 30 5a 31 2e 0a   K0.2.N235G00Z1..	
    4e 32 34 30 4d 30 35 0a 4e 32 34 35 47 35 33 47   N240M05.N245G53G	
    30 30 5a 29                                       00Z)            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    01 08 f7 30 2e 0a 0a 4e 36 36 34 33 35 4d 30 35   ..÷0...N66435M05	
    0a 4e 36 36 34 34 30 4d 30 39 0a 4e 36 36 34 34   .N66440M09.N6644	
    35 47 35 33 47 30 30 5a 30 2e 0a 4e 36 36 34 35   5G53G00Z0..N6645	
    35 58 32 2e 31 38 37 35 0a 4e 36 36 34 36 30 47   5X2.1875.N66460G	
    35 33 59 30 2e 0a 4e 36 36 34 36 35 4d 33 30 0a   53Y0..N66465M30.	
    0a 25 0a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a   .%..............	
    1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a   ................	
    1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a   ................	
    1a 1a 1a e4                                       ...ä            	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
[30/10/2017 10:27:21] Read data (COM2)	
    04                                                .               	
[30/10/2017 10:27:21] Written data (COM2)	
    06                                                .               	
```

<p align="center">
Figure 23. CNC to PC
</p>

``` 
[30/10/2017 10:32:35] Read data (COM2)	
    15                                                .               	
[30/10/2017 10:32:37] Read data (COM2)	
    15 15                                             ..              	
[30/10/2017 10:32:37] Written data (COM2)	
    01 01 fe 0a 25 0a 4f 30 35 35 35 35 28 43 53 33   ..þ.%.O05555(CS3	
    39 30 5f 54 65 73 74 5f 4e 43 29 0a 28 55 73 69   90_Test_NC).(Usi	
    6e 67 20 47 30 20 77 68 69 63 68 20 74 72 61 76   ng G0 which trav	
    65 6c 73 20 61 6c 6f 6e 67 20 64 6f 67 6c 65 67   els along dogleg	
    20 70 61 74 68 2e 29 0a 28 54 31 20 44 3d 32 2e    path.).(T1 D=2.	
    20 43 52 3d 30 2e 20 2d 20 5a 4d 49 4e 3d 2d 30    CR=0. - ZMIN=-0	
    2e 31 32 35 20 2d 20 66 61 63 65 20 6d 69 6c 6c   .125 - face mill	
    29 0a 28 54 33 20 44 3d 30 2e 35 20 43 52 3d 30   ).(T3 D=0.5 CR=0	
    2e 20 2d 98 01 01 fe 0a 25 0a 4f 30 35 35 35 35   . -˜..þ.%.O05555	
    28 43 53 33 39 30 5f 54 65 73 74 5f 4e 43 29 0a   (CS390_Test_NC).	
    28 55 73 69 6e 67 20 47 30 20 77 68 69 63 68 20   (Using G0 which 	
    74 72 61 76 65 6c 73 20 61 6c 6f 6e 67 20 64 6f   travels along do	
    67 6c 65 67 20 70 61 74 68 2e 29 0a 28 54 31 20   gleg path.).(T1 	
    44 3d 32 2e 20 43 52 3d 30 2e 20 2d 20 5a 4d 49   D=2. CR=0. - ZMI	
    4e 3d 2d 30 2e 31 32 35 20 2d 20 66 61 63 65 20   N=-0.125 - face 	
    6d 69 6c 6c 29 0a 28 54 33 20 44 3d 30 2e 35 20   mill).(T3 D=0.5 	
    43 52 3d 30 2e 20 2d 98                           CR=0. -˜        	
[30/10/2017 10:32:37] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:37] Written data (COM2)	
    01 02 fd 20 5a 4d 49 4e 3d 2d 31 2e 31 32 35 20   ..ý ZMIN=-1.125 	
    2d 20 66 6c 61 74 20 65 6e 64 20 6d 69 6c 6c 29   - flat end mill)	
    0a 4e 31 30 47 39 30 47 39 34 47 31 37 0a 4e 31   .N10G90G94G17.N1	
    35 47 32 30 0a 4e 32 30 47 35 33 47 30 30 5a 30   5G20.N20G53G00Z0	
    2e 0a 0a 28 46 61 63 65 33 29 0a 4e 33 30 54 31   ...(Face3).N30T1	
    4d 30 36 0a 4e 33 35 53 36 35 30 30 4d 30 33 0a   M06.N35S6500M03.	
    4e 34 30 47 35 34 0a 4e 34 35 4d 30 38 0a 4e 36   N40G54.N45M08.N6	
    30 47 30 30 58 35 2e 36 37 35 59 30 2e 33 31 34   0G00X5.675Y0.314	
    37 0a 4e 26                                       7.N&            	
[30/10/2017 10:32:38] Read data (COM2)	
    15                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 02 fd 20 5a 4d 49 4e 3d 2d 31 2e 31 32 35 20   ..ý ZMIN=-1.125 	
    2d 20 66 6c 61 74 20 65 6e 64 20 6d 69 6c 6c 29   - flat end mill)	
    0a 4e 31 30 47 39 30 47 39 34 47 31 37 0a 4e 31   .N10G90G94G17.N1	
    35 47 32 30 0a 4e 32 30 47 35 33 47 30 30 5a 30   5G20.N20G53G00Z0	
    2e 0a 0a 28 46 61 63 65 33 29 0a 4e 33 30 54 31   ...(Face3).N30T1	
    4d 30 36 0a 4e 33 35 53 36 35 30 30 4d 30 33 0a   M06.N35S6500M03.	
    4e 34 30 47 35 34 0a 4e 34 35 4d 30 38 0a 4e 36   N40G54.N45M08.N6	
    30 47 30 30 58 35 2e 36 37 35 59 30 2e 33 31 34   0G00X5.675Y0.314	
    37 0a 4e 26                                       7.N&            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 03 fc 36 35 47 34 33 5a 31 2e 48 31 0a 4e 37   ..ü65G43Z1.H1.N7	
    30 54 33 0a 4e 37 35 47 30 30 5a 30 2e 35 0a 4e   0T3.N75G00Z0.5.N	
    38 30 47 30 31 5a 30 2e 31 37 35 46 36 35 2e 0a   80G01Z0.175F65..	
    4e 38 35 47 31 38 47 30 33 58 35 2e 34 37 35 5a   N85G18G03X5.475Z	
    2d 30 2e 30 32 35 49 2d 30 2e 32 4b 30 2e 0a 4e   -0.025I-0.2K0..N	
    39 30 47 30 31 58 34 2e 33 37 35 0a 4e 39 35 58   90G01X4.375.N95X	
    30 2e 0a 4e 31 30 30 47 31 37 47 30 32 59 31 2e   0..N100G17G02Y1.	
    36 31 30 33 49 30 2e 4a 30 2e 36 34 37 38 0a 4e   6103I0.J0.6478.N	
    31 30 35 41                                       105A            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 04 fb 47 30 31 58 34 2e 33 37 35 0a 4e 31 31   ..ûG01X4.375.N11	
    30 47 30 33 59 32 2e 39 30 36 49 30 2e 4a 30 2e   0G03Y2.906I0.J0.	
    36 34 37 38 0a 4e 31 31 35 47 30 31 58 30 2e 0a   6478.N115G01X0..	
    4e 31 32 30 47 31 38 47 30 33 58 2d 30 2e 32 5a   N120G18G03X-0.2Z	
    30 2e 31 37 35 49 30 2e 4b 30 2e 32 0a 4e 31 32   0.175I0.K0.2.N12	
    35 47 30 30 5a 30 2e 35 0a 4e 31 33 30 58 2d 31   5G00Z0.5.N130X-1	
    2e 33 59 30 2e 33 31 34 37 0a 4e 31 33 35 47 30   .3Y0.3147.N135G0	
    31 5a 30 2e 31 32 35 46 36 35 2e 0a 4e 31 34 30   1Z0.125F65..N140	
    47 30 32 fe                                       G02þ            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 05 fa 58 2d 31 2e 31 5a 2d 30 2e 30 37 35 49   ..úX-1.1Z-0.075I	
    30 2e 32 4b 30 2e 0a 4e 31 34 35 47 30 31 58 30   0.2K0..N145G01X0	
    2e 0a 4e 31 35 30 58 34 2e 33 37 35 0a 4e 31 35   ..N150X4.375.N15	
    35 47 31 37 47 30 33 59 31 2e 36 31 30 33 49 30   5G17G03Y1.6103I0	
    2e 4a 30 2e 36 34 37 38 0a 4e 31 36 30 47 30 31   .J0.6478.N160G01	
    58 30 2e 0a 4e 31 36 35 47 30 32 59 32 2e 39 30   X0..N165G02Y2.90	
    36 49 30 2e 4a 30 2e 36 34 37 38 0a 4e 31 37 30   6I0.J0.6478.N170	
    47 30 31 58 34 2e 33 37 35 0a 4e 31 37 35 47 31   G01X4.375.N175G1	
    38 47 30 1c                                       8G0.            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 06 f9 32 58 34 2e 35 37 35 5a 30 2e 31 32 35   ..ù2X4.575Z0.125	
    49 30 2e 4b 30 2e 32 0a 4e 31 38 30 47 30 30 5a   I0.K0.2.N180G00Z	
    30 2e 35 0a 4e 31 38 35 58 35 2e 36 37 35 59 30   0.5.N185X5.675Y0	
    2e 33 31 34 37 0a 4e 31 39 30 47 30 31 5a 30 2e   .3147.N190G01Z0.	
    30 37 35 46 36 35 2e 0a 4e 31 39 35 47 30 33 58   075F65..N195G03X	
    35 2e 34 37 35 5a 2d 30 2e 31 32 35 49 2d 30 2e   5.475Z-0.125I-0.	
    32 4b 30 2e 0a 4e 32 30 30 47 30 31 58 34 2e 33   2K0..N200G01X4.3	
    37 35 0a 4e 32 30 35 58 30 2e 0a 4e 32 31 30 47   75.N205X0..N210G	
    31 37 47 23                                       17G#            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 07 f8 30 32 59 31 2e 36 31 30 33 49 30 2e 4a   ..ø02Y1.6103I0.J	
    30 2e 36 34 37 38 0a 4e 32 31 35 47 30 31 58 34   0.6478.N215G01X4	
    2e 33 37 35 0a 4e 32 32 30 47 30 33 59 32 2e 39   .375.N220G03Y2.9	
    30 36 49 30 2e 4a 30 2e 36 34 37 38 0a 4e 32 32   06I0.J0.6478.N22	
    35 47 30 31 58 30 2e 0a 4e 32 33 30 47 31 38 47   5G01X0..N230G18G	
    30 33 58 2d 30 2e 32 5a 30 2e 30 37 35 49 30 2e   03X-0.2Z0.075I0.	
    4b 30 2e 32 0a 4e 32 33 35 47 30 30 5a 31 2e 0a   K0.2.N235G00Z1..	
    4e 32 34 30 4d 30 35 0a 4e 32 34 35 47 35 33 47   N240M05.N245G53G	
    30 30 5a 29                                       00Z)            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    01 08 f7 30 2e 0a 0a 4e 36 36 34 33 35 4d 30 35   ..÷0...N66435M05	
    0a 4e 36 36 34 34 30 4d 30 39 0a 4e 36 36 34 34   .N66440M09.N6644	
    35 47 35 33 47 30 30 5a 30 2e 0a 4e 36 36 34 35   5G53G00Z0..N6645	
    35 58 32 2e 31 38 37 35 0a 4e 36 36 34 36 30 47   5X2.1875.N66460G	
    35 33 59 30 2e 0a 4e 36 36 34 36 35 4d 33 30 0a   53Y0..N66465M30.	
    0a 25 0a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a   .%..............	
    1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a   ................	
    1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a 1a   ................	
    1a 1a 1a e4                                       ...ä            	
[30/10/2017 10:32:38] Read data (COM2)	
    06                                                .               	
[30/10/2017 10:32:38] Written data (COM2)	
    04                                                .               	
[30/10/2017 10:32:38] Read data (COM2)	
    18 18 18                                          ...          .               	
```

<p align="center">
Figure 24. PC to CNC
</p>

## Refrences

1. [Productivity Inc. Mill Operations](https://www.productivity.com/wp-content/uploads/2015/04/Haas-Mill-Operator-Manual.pdf)
2. [Productivity Inc. Mill Programming](https://www.productivity.com/wp-content/uploads/2015/04/Haas-Mill-Programming-Manual.pdf)
3. [CyberinDNC](https://github.com/piyushnet/Cyberin-DNC-2017)
4. [Bechtel Innovative Design Center, Purdue](https://www.purdue.edu/bidc/)
5. [Wikipedia XMODEM](https://en.wikipedia.org/wiki/XMODEM)
6. [MIT XModem with CRC](http://web.mit.edu/6.115/www/amulet/xmodem.htm)
7. [XMODEM Protocol](http://techheap.packetizer.com/communication/modems/xmodem.html)
8. [Wikibooks Serial Programming](https://en.wikibooks.org/wiki/Serial_Programming/termios)
9. [Termios Man Pages](http://man7.org/linux/man-pages/man3/termios.3.html)
10. [How to read serial data from an Arduino in Linux with C](https://chrisheydrick.com/2012/06/12/how-to-read-serial-data-from-an-arduino-in-linux-with-c-part-1/)
11. [DIY Haas RS232 Connection](https://diy.haascnc.com/reference-docs/rs-232-connection#gsc.tab=0)
12. [FactoryWiz DPrint](http://www.rym.com/wp-content/uploads/Monitoring%20DPRNT%20White%20Paper.pdf)
13. [DIY Haas Wired Network](https://diy.haascnc.com/procedures/next-generation-control-networking-option#gsc.tab=0)
14. [DIY Haas Net Share](https://diy.haascnc.com/procedures/next-generation-control-net-share#gsc.tab=0)
15. [DIY Haas Local Share](https://diy.haascnc.com/procedures/next-generation-control-net-share-local#gsc.tab=0)
16. [DIY Haas Remote Share](https://diy.haascnc.com/procedures/next-generation-control-net-share-remote#gsc.tab=0)

## Contact Information

<img src="https://scontent-ort2-1.xx.fbcdn.net/v/t1.0-9/12063434_10204282048726475_7634428386806909401_n.jpg?oh=5fe1eec67a79d1a010ca0a40ab7cdbd4&oe=5A8B2825" width="200" height="200" />

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
pal5@purdue.edu  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Anirudh Pal  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Undergradute Student  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Computer Science  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
College of Science  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Purdue University
