#include <AFMotor.h>

//int pin = 10; // connected to the Trig on the module, this serves as both Trigger and Echo
int motor1p= 3;
//int motor1m= 6;
AF_DCMotor leftmotor(motor1p), rightmotor(4), rightfront(1), leftfront(2);

//const int trigPin = 46;
//const int echoPin = 48;
long duration;
int distance;

int i;

void setup(){
  leftmotor.setSpeed(255);
  rightmotor.setSpeed(255);

  rightfront.setSpeed(255);
  leftfront.setSpeed(255);

  leftmotor.run(RELEASE);
  rightmotor.run(RELEASE);
  leftfront.run(RELEASE);
  rightfront.run(RELEASE);
}

void loop(){
  forward();
  delay(1000);

  stops();
  delay(1000);

  backwards();
  delay(1000);

  stops();
  delay(1000);
}

//void setup()
//{
//  Serial.begin(9600);
//  pinMode(pin, OUTPUT);
//  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
//  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
//  digitalWrite(pin, HIGH); // Trig pin is normally HIGH
//
//  // turn on motor
//  leftmotor.setSpeed(255);
//  rightmotor.setSpeed(255);
// 
//  leftmotor.run(RELEASE);
//  rightmotor.run(RELEASE);
//  
//}
//
//void loop()
//{
////  forward();
////  delay(1000);
//  
//    // Clears the trigPin
//    digitalWrite(trigPin, LOW);
//    delayMicroseconds(2);
//    
//    // Sets the trigPin on HIGH state for 10 micro seconds
//    digitalWrite(trigPin, HIGH);
//    delayMicroseconds(10);
//    digitalWrite(trigPin, LOW);
//    
//    // Reads the echoPin, returns the sound wave travel time in microseconds
//    duration = pulseIn(echoPin, HIGH);
//    
//    // Calculating the distance
//    distance= duration*0.034/2;
//    
//    // Prints the distance on the Serial Monitor
//    Serial.print("Distance: ");
//    Serial.println(distance);
//
//  
//  
//}
//
void forward()
{
   rightmotor.run(FORWARD);
   leftmotor.run(FORWARD);
   rightfront.run(FORWARD);
   leftfront.run(FORWARD);
   rightmotor.setSpeed(255);
   leftmotor.setSpeed(255);
   rightfront.setSpeed(255);
   leftfront.setSpeed(255);
   delay(1500);
}
//
void backwards()
{
   rightmotor.run(BACKWARD);
   leftmotor.run(BACKWARD);
   rightfront.run(BACKWARD);
   leftfront.run(BACKWARD);
    rightmotor.setSpeed(255); 
    leftmotor.setSpeed(255);
    rightfront.setSpeed(255);
    leftfront.setSpeed(255);
    delay(1500);
 
//  for (i=255; i!=0; i--) {
//    rightmotor.setSpeed(i);  
//    leftmotor.setSpeed(i);
//    leftfront.setSpeed(i);
//    rightfront.setSpeed(i);
//    delay(1000);
// }
}
//
void stops()
{
  Serial.print("tech");
  leftmotor.run(RELEASE);
  rightmotor.run(RELEASE);
  rightfront.run(RELEASE);
  leftfront.run(RELEASE);
}
