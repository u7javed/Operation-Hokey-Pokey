#include <Servo.h>
#include <AFMotor.h>
//#include <Pixy2.h>
const uint16_t BLUE = 1;
const uint16_t PURPLE = 2;
const uint16_t RED = 3;
const uint16_t YELLOW = 4;

int motor1p= 3;
AF_DCMotor leftmotor(motor1p), rightmotor(4), rightfront(1), leftfront(2);
Servo ultra;
int servoPin= 3;
int distance;

unsigned long times= 0;
int period= 5500;
int p= 7500;

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
  ultra.write(0);

}

void loop(){
  times= millis();
  while(millis() < times + period){
    forward();

    if(false){
      stops();
      delay(1000);
      ultra.write(90);
      delay(500);
      ultra.write(0);
      delay(500);
    }
  }
    stops();
    delay(1000);

//    times= millis();
    while(millis() < p + times)
      forward();
    

    stops();
    delay(1000);

    times= millis();
    while(millis() < times + period){
      backwards();

      if(true){
        stops();
        delay(1000);
        ultra.write(90);
        delay(500);
        ultra.write(0);
        delay(500);
      }
  }
    stops();
    delay(1000);

    while(millis() < times + p)
      backwards();
    
    
    stops();
    delay(1000);
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
}

void stops()
{
  Serial.print("tech");
  leftmotor.run(RELEASE);
  rightmotor.run(RELEASE);
  rightfront.run(RELEASE);
  leftfront.run(RELEASE);
}
