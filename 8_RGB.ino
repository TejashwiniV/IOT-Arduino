/* Simple RGB */

int redPin = 11;
int greenPin = 10;
int bluePin = 9;
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
void loop()
{
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(50, 25, 20);  // green
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(255, 255, 0);  // yellow
  delay(1000);  
  setColor(80, 0, 80);  // purple
  delay(1000);
  setColor(0, 255, 255);  // aqua
  delay(1000);
}
void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}

/* Design a colour recognition system */

const int s0 = 8;
const int s1 = 9;
const int s2 = 12;
const int s3 = 11;
const int out = 10;

int redLed = 2;
int greenLed = 3;
int blueLed = 4;

int red = 0;
int green = 0;
int blue = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  digitalWrite(s0, HIGH);
  digitalWrite(s1, HIGH);
}
void loop()
{
  color();
  Serial.print("R Intensity:");
  Serial.print(red, DEC);
  Serial.print(" G Intensity: ");
  Serial.print(green, DEC);
  Serial.print(" B Intensity : ");
  Serial.print(blue, DEC);
  if (red < blue && red < green )
  {
    Serial.println(" - (Red Color)");
    digitalWrite(redLed, HIGH); 
    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, LOW);
  }
  else if (blue < red && blue < green)
  {
    Serial.println(" - (Blue Color)");
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(blueLed, HIGH); 
  }
  else if (green < red && green < blue)
  {
    Serial.println(" - (Green Color)");
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH); 
    digitalWrite(blueLed, LOW);
  }
  else
  {
    Serial.println();
  }
  delay(300);
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
}
void color()
{
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);

  red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  digitalWrite(s3, HIGH);

  blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  digitalWrite(s2, HIGH);

  green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
}
