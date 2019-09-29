#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX | TX
void setup() 
{
 Serial.begin(9600);
 BTSerial.begin(38400); // HC-05 default speed in AT command more
}
void loop()
{
 // Reading the button
 if(Serial.available())
 {
   String message = Serial.readString();
   Serial.println (message);
   BTSerial.write(message.c_str());
 }
} 
