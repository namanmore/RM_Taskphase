# CIRCUIT
![](https://github.com/namanmore/RM_Taskphase/blob/main/BOT%20Base%20Tasks/two_motors.PNG)  



# CODE  
``` int M1_P1=9,M1_P2=10,M2_P1=5,M2_P2=6,n;
void setup()
{
  pinMode(M1_P1, OUTPUT);
  pinMode(M1_P2, OUTPUT);
  pinMode(M2_P1, OUTPUT);
  pinMode(M2_P2, OUTPUT);
  Serial.begin(9600);
  Serial.println("Press :-");
  Serial.println("F for Forward");
  Serial.println("B for Backward");
  Serial.println("R for Right Turn");
  Serial.println("L for Left Turn");
  Serial.println("r for Rotate Right/Clockwise");
  Serial.println("l for Rotate Left/Counter-Clockwise");
}
void cal()
{
  Serial.println("Press :-");
  Serial.println("F for Forward");
  Serial.println("B for Backward");
  Serial.println("R for Right Turn");
  Serial.println("L for Left Turn");
  Serial.println("r for Rotate Right/Clockwise");
  Serial.println("l for Rotate Left/Counter-Clockwise");
}
void forward()
{
  digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, HIGH);
  digitalWrite(M2_P1, HIGH);
  digitalWrite(M2_P2, LOW);
}

void backward()
{
  digitalWrite(M1_P1, HIGH);
  digitalWrite(M1_P2, LOW);
  digitalWrite(M2_P1, LOW);
  digitalWrite(M2_P2, HIGH);
}
void right_turn()
{
  digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, HIGH);
  analogWrite(M2_P1, 127);
  digitalWrite(M2_P2, LOW);
}
void left_turn()
{
  digitalWrite(M1_P1, LOW);
  analogWrite(M1_P2, 127);
  digitalWrite(M2_P1, HIGH);
  digitalWrite(M2_P2, LOW);
}
void rotate_right()
{
  digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, HIGH);
  digitalWrite(M2_P1, LOW);
  digitalWrite(M2_P2, HIGH);
}
void rotate_left()
{
  digitalWrite(M1_P1, HIGH);
  digitalWrite(M1_P2, LOW);
  digitalWrite(M2_P1, HIGH);
  digitalWrite(M2_P2, LOW);
  
}
void loop()
{
  if(Serial.available()>0)
  {
     n=Serial.read();
     switch(n)
     {
       case 70:
        cal();
       forward();break;
       case 66:
        cal();
       backward();break;
       case 82:
       cal();
       right_turn();break;
       case 76:
        cal();
       left_turn();break;
       case 114:
        cal();
       rotate_right();break;
       case 108:
        cal();
       rotate_left();break;
       default:
       Serial.println("Invalid Choice");
     }    
  }
}
```
