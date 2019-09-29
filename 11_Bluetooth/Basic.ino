#include<SoftwareSerial.h>
SoftwareSerial Bt(10,11);
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Enter AT Commands");
  Bt.begin(38400);
}
void loop() 
{
  // put your main code here, to run repeatedly:
  if(Bt.available())
  Serial.write(Bt.read());
  if(Serial.available())
  Bt.write(Serial.read());
}
