%
O05555 (CS390_Test_NC)
(Using G0 which travels along dogleg path.)
(T1 D=2. CR=0. - ZMIN=-0.125 - face mill)
(T3 D=0.5 CR=0. - ZMIN=-1.125 - flat end mill)
N10 G90 G94 G17
N15 G20
N20 G53 G0 Z0.

(Face3)
N30 T1 M6
N35 S6500 M3
N40 G54
N45 M8
N60 G0 X5.675 Y0.3147
N65 G43 Z1. H1
N70 T3
N75 G0 Z0.5
N80 G1 Z0.175 F65.
N85 G18 G3 X5.475 Z-0.025 I-0.2 K0.
N90 G1 X4.375
N95 X0.
N100 G17 G2 Y1.6103 I0. J0.6478
N105 G1 X4.375
N110 G3 Y2.906 I0. J0.6478
N115 G1 X0.
N120 G18 G3 X-0.2 Z0.175 I0. K0.2
N125 G0 Z0.5
N130 X-1.3 Y0.3147
N135 G1 Z0.125 F65.
N140 G2 X-1.1 Z-0.075 I0.2 K0.
N145 G1 X0.
N150 X4.375
N155 G17 G3 Y1.6103 I0. J0.6478
N160 G1 X0.
N165 G2 Y2.906 I0. J0.6478
N170 G1 X4.375
N175 G18 G2 X4.575 Z0.125 I0. K0.2
N180 G0 Z0.5
N185 X5.675 Y0.3147
N190 G1 Z0.075 F65.
N195 G3 X5.475 Z-0.125 I-0.2 K0.
N200 G1 X4.375
N205 X0.
N210 G17 G2 Y1.6103 I0. J0.6478
N215 G1 X4.375
N220 G3 Y2.906 I0. J0.6478
N225 G1 X0.
N230 G18 G3 X-0.2 Z0.075 I0. K0.2
N235 G0 Z1.
N240 M5
N245 G53 G0 Z0.

N66435 M5
N66440 M9
N66445 G53 G0 Z0.
N66455 X2.1875
N66460 G53 Y0.
N66465 M30

%
