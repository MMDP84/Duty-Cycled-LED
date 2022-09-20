/*
This Project Made by MMDP
Duty Cycled LED
*/


const int ledPin = 5;  // this is the digital pin we have to connect
const int analogPin = 0;  // this is the analogue pin that we have to connect
int val, dutyc;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  }

void loop(){
  val = analogRead(analogPin);
  dutyc=map(val, 0, 1023, 0, 255);
  analogWrite(ledPin, dutyc);
  dutyc=map(dutyc, 0, 255, 0, 100);
  Serial.print("duty-cycle = "); Serial.print(dutyc); Serial.println(" %");
  delay(20);   // this is the response delay which LED change the light strength after this time
  } 
