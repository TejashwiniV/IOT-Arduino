/* Design and program Smart Light using LDR Sensor and LED */

int led=13;
int analogPin=0;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(analogPin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensedValue=analogRead(analogPin);
  Serial.print("Sensed Value : ");
  Serial.println(sensedValue);
  int threshhold=500;
  if(sensedValue<threshhold)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(1000);
}
