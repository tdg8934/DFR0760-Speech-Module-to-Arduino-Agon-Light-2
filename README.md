# DFR0760-Speech-Module-to-Arduino-Agon-Light-2
Speech module for Agon Light 2 through I2C / UART RX/TX via Arduino UNO

This DFRobot Gravity DFR0760 speech synthesizer V2.0.0 will add speech capabilities to your Agon Light 2 via it's connection to an Arduino. I used the recommended Arduino UNO. Since the Agon Light 2 uses 3.3vdc and the Arduino UNO uses 5vdc you will need to add a bidirectional level shifter (use 2 of the 4 on the board). This can be easily located on Amazon or SparkFun : https://www.amazon.com/SparkFun-Logic-Level-Converter-Bi-Directional/dp/B01N30ZCW9
The Arduino uses the DFRobot speech synthesis V2.0 library (dont use the older V1). This provides functionality to speak in diferent voices, faster/slower, japanese or english, etc. that the Agon Light would need additional programming to accomplish which may be very difficult due to the very limited information provided about this speech synthesizer DFR0760. 
I did have alot of issues programming the Arduino due to my limited knowledge but found that you should "disconnect power" to the Agon Light 2 when uploading new code to the Arduino chip. 
The Autoexec.txt calls out a bbc basic program BASICHEADER2.BAS which has been modified to ask the user there name. When the user types in their name the speech module says Hello along with the users name. It then asks them to enter in a mode. 
This approach is in it's infancy but I believe I have provided enough information to allow the Agon Light 2 / Arduino user to program in speech into their Agon Light 2 programs. 
