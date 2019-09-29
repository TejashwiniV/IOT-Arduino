int analogPin=3;
void setup()
{
  pinMode(analogPin,INPUT);
  Serial.begin(9600);
}
void loop() 
{
 int value=analogRead(analogPin);
 float mV_value=((float)value*5000)/1024;
 float temp_in_c=(mV_value)/10;
 Serial.print("Temperature in C = ");
 Serial.println(temp_in_c);
 delay(1000);
}
