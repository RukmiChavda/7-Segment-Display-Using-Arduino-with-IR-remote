#include <IRremote.h>       // Including library for IR remote 

int IRpin = 3;              // pin where IR reciver pin define
IRrecv irrecv(IRpin);       // IR reciver pin confugration 
decode_results results;     // hex code decoding function

// seven segment display connection with arduino digital pin //
int purple=13;
int blue=12;
int green=11;
int yellow=10;
int orange=9;
int red=8;
int brown=7;

void setup()
{
  Serial.begin(9600); 
  irrecv.enableIRIn();      // enabling reciving  
  
 pinMode(purple,OUTPUT);
 pinMode(blue,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(orange,OUTPUT);
 pinMode(red,OUTPUT);
 pinMode(brown,OUTPUT);
}

void loop() 

{   
   if (irrecv.decode(&results)) 
    {
     Serial.println(results.value); 
     delay(100);
     irrecv.resume(); 
      if(results.value==642546947)
      {
          digitalWrite(purple,LOW);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,LOW);   
      }
      if(results.value==761297281)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,LOW);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,LOW);
          digitalWrite(brown,HIGH);
      }
      if(results.value==2280302909)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,HIGH);      }
      if(results.value==2463769059)
      {
         digitalWrite(purple,LOW);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
      }
      if(results.value==2676936661)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,LOW);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,LOW); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
      }
      if(results.value==1082616703)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,LOW);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
      }
      if(results.value==4127357251)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,LOW);
      }
      if(results.value==3261382073)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
      }
      if(results.value==3037596189)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,LOW); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);      }
      if(results.value==649708765)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,LOW);
      }
      if(results.value==4013631835)
      {
          digitalWrite(purple,LOW);
          digitalWrite(blue,LOW);
          digitalWrite(green,LOW);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,LOW); 
      }
      if(results.value==1774647933)
      {
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,LOW);
          delay(1000);
          digitalWrite(purple,LOW);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,LOW); 
          delay(1000);
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,LOW);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,LOW);
          digitalWrite(brown,HIGH);
          delay(1000);
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,HIGH);  
          delay(1000);
          digitalWrite(purple,LOW);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
          delay(1000);
          digitalWrite(purple,HIGH);
          digitalWrite(blue,LOW);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,LOW); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
          delay(1000);
          digitalWrite(purple,HIGH);
          digitalWrite(blue,LOW);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
          delay(1000);
           digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,LOW);
          delay(1000);
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,HIGH); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);
          delay(1000);
          digitalWrite(purple,HIGH);
          digitalWrite(blue,HIGH);
          digitalWrite(green,HIGH);
          digitalWrite(yellow,HIGH);
          digitalWrite(orange,LOW); 
          digitalWrite(red,HIGH);
          digitalWrite(brown,HIGH);    
          delay(1000);
           digitalWrite(purple,LOW);
          digitalWrite(blue,LOW);
          digitalWrite(green,LOW);
          digitalWrite(yellow,LOW);
          digitalWrite(orange,LOW); 
          digitalWrite(red,LOW);
          digitalWrite(brown,LOW); 
        }
    }
}
