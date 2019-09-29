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
 analogWrite(led,sensorOutput);
 Serial.print("Initial Value ");
 Serial.println(sensedValue);
 Serial.print("Converted  Value ");
 Serial.print(sensorOutput);
 delay(30);
}
