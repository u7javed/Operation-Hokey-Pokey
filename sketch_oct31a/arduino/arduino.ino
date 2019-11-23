#include <Servo.h>
#include <AFMotor.h>

//int pin = 10; // connected to the Trig on the module, this serves as both Trigger and Echo
int motor1p= 3;
AF_DCMotor leftmotor(motor1p), rightmotor(4), rightfront(1), leftfront(2);
Servo ultra;
int servoPin= 3;
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

  ultra.attach(9);//servo
}

void loop(){
  forward();
  delay(1000);

  stops();
  delay(1000);

  backwards();
  delay(1000);

//  if(){
//    stops();
//    delay(1000);
//    ultra.write(90);
//    delay(10000);
//  }
}

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
}

void stops()
{
  Serial.print("tech");
  leftmotor.run(RELEASE);
  rightmotor.run(RELEASE);
  rightfront.run(RELEASE);
  leftfront.run(RELEASE);
}
