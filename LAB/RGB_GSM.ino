#include <SoftwareSerial.h> 
SoftwareSerial cell(2,3); 
void readfn()    
{ 
  if (cell.available()) 
  { 
    while (cell.available()) 
    { 
      Serial.write(cell.read());       
     }        
   }    
} 
void setup() 
{ 
  pinMode(8,OUTPUT); 
  pinMode(9,OUTPUT); 
  pinMode(10,OUTPUT); 
  Serial.begin(9600); 
cell.begin(9600); 
delay(1000); 
readfn(); 
digitalWrite(8,LOW);   
      digitalWrite(9,LOW); 
      digitalWrite(10,LOW);
cell.println("AT+CNMI=2,2,0,0,0");//New SMS alert     
} 
void loop() 
{
  
  if(cell.available())  
  {  
    String message =cell.readString(); 
    Serial.println(message); 
    if(message.indexOf("red")>0)  
    {
     digitalWrite(8,HIGH);   
      digitalWrite(9,LOW); 
      digitalWrite(10,LOW);
    }
    else if(message.indexOf("green")>0) 
    {  
       digitalWrite(8,LOW);   
      digitalWrite(9,HIGH); 
      digitalWrite(10,LOW);   
    }
     else if(message.indexOf("blue")>0)
     {   
       digitalWrite(8,LOW);   
      digitalWrite(9,LOW); 
      digitalWrite(10,HIGH);  
    } 
  }
}
