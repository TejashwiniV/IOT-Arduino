int led=13;
int button=2;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}
void loop()
{
  digitalWrite(led,LOW);
  int x=digitalRead(button);
  if(x==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
