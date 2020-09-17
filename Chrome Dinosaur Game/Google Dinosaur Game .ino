#include <Servo.h>          //Including the Servo header file
#define threshold 250      //Assigns value to threshold
#define unpress_angle 70   //Assigns value to the unpress_angle
#define press_angle 36     //Assigns value to the prees_angle

Servo myservo;           //Creates a servo object to control a servo
         

void setup() 
{
  myservo.attach(9);            //Attaches pin 9 to servo object
  myservo.write(unpress_angle); //Initially intialises the servo to unpress_angle

}

void loop() 
{
  myservo.write(unpress_angle);   //Unpress button condition
  delay(1);                       //Delay of milli-second
  if(analogRead(A0)<threshold)
  {
    myservo.write(press_angle);  //Sets the servo for press button condition if analog value got from A0 is less than threshold
    delay(110);                  //Delay of 110 milli seconds 
  }

}
