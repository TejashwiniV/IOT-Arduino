int red1=0;
int yellow1=1;
int green1=2;
int red2=5;
int yellow2=6;
int green2=7;
void setup() 
{
  pinMode(red1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green2,OUTPUT);
}
void loop()
{
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  delay(2000);
  digitalWrite(red1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(1000);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(green1,HIGH);
  digitalWrite(red2,HIGH);
  delay(2000);
  digitalWrite(green1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(1000);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
}
