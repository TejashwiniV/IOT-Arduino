/*  Design and implement smart irrigation system using Soil Moisture sensor and Servo Motor */

#include<Servo.h>
Servo myservo;
int pos=0;
int sensorPin=A0;
int sensorValue=0;
void setup() 
{
  myservo.attach(9);
  Serial.begin(9600);
}
void loop() 
{
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(1000);
  if(sensorValue>500)
  {
    for(pos=0;pos<180;pos+=10)
    {
      myservo.write(pos);
      delay(15);
    }
    for(pos=180;pos>=0;pos-=10)
    {
      myservo.write(pos);
      delay(15);
    }
  }
  delay(1000);
}
