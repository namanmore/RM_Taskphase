![yo](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/Servo_Motor(ALL%20ANGLES).PNG)  
# CODE:
```
#include <Servo.h>
Servo servo;int servopin=12;int val=0,z;
void setup()
{
  servo.attach(servopin);
  Serial.begin(9600);
  Serial.println("Enter the angle");
  servo.write(0);
}
void loop()
{
  if(Serial.available()>0){
  val=Serial.parseInt();
    z=rt(val);
  servo.write(z);
Serial.print("The value received is");Serial.println(val);delay(15);
Serial.println("Enter the angle");
  }    }
int rt(int x){
  int d,q,f;
  if(x>180){
    d=x/180;
    f=d*180;
    if(f==x)
      q=180;
    else
      q=x-f;
  }
  else
    q=x;
  return q;
}
```
