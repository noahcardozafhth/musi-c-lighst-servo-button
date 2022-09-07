#include <Servo.h>

Servo myServo;
const int buttonPin = 6;     // the number of the pushbutton pin
 int buttonState = 0;      // the number of the LED pin
static int ledPin =  10;

// variables will change:
 
void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
   pinMode(buttonPin, INPUT);
   pinMode(ledPin, OUTPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
 pinMode(ledPin, OUTPUT);
 digitalWrite(ledPin, HIGH);

    
    
  myServo.write(180);
  delay(1000);
  myServo.write(0);
  delay(1000);
}else { digitalWrite(ledPin, LOW);}
}
