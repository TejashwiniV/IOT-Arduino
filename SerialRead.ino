int ledPin=13;
void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
    char data=Serial.read();
    if(data=='H')
    {
      digitalWrite(ledPin,HIGH);
    }
    else if(data=='L')
    {
      digitalWrite(ledPin,LOW);
    }
  }
}
