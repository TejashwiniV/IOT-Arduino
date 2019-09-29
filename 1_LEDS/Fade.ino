/* Implement LED FADE Using potentiometer */

int led=9;
int anaPin=0;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(anaPin,INPUT);
  Serial.begin(9600);
}
void loop()
{
 int sensedValue=analogRead(anaPin);
 int sensorOutput=map(sensedValue,0,1023,0,255);
 digitalWrite(7,HIGH);
 analogWrite(led,sensorOutput);
 Serial.print("Initial Value ");
 Serial.println(sensedValue);
 Serial.print("Converted Value ");
 Serial.println(sensorOutput);
 delay(500);
}
