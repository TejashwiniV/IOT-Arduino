/* Design and implement Traffic Light controller using LEDs */

int red=9;
int green=10;
int yellow=11;
void setup() 
{
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
}
void loop()
{
  digitalWrite(red, HIGH);
  delay(6000);
  digitalWrite(red,LOW);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  digitalWrite(green, HIGH);
  delay(4000);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
}
