/* Design and implement Fire alarm system using flame sensor and buzzer */

int sensor=0;
int buzzer=8;
int led=13;
void setup()
{
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  int sensedValue=analogRead(sensor);
  Serial.print("Sensed Value : ");
  Serial.println(sensedValue);
  delay(1000);
  int threshold=200;
  if(sensedValue<threshold)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
  }
}
