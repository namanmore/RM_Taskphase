![yo](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/AlignBotToWall%26Move_2%20UltrasonicSensors.PNG)
# CODE:  
```
int M1_P1=5,M1_P2=6,M2_P1=9,M2_P2=10;
int US1_trig=2,US1_echo=3,US2_trig=12,US2_echo=11;
double dist,time,dist2,time2;

void setup()
{
  pinMode(M1_P1, OUTPUT);
  pinMode(M1_P2, OUTPUT);
  pinMode(M2_P1, OUTPUT);
  pinMode(M2_P2, OUTPUT);
  pinMode(US1_trig, OUTPUT);
  pinMode(US2_trig, OUTPUT);
  pinMode(US1_echo, INPUT);
  pinMode(US2_echo, INPUT);
  Serial.begin(9600);
}
void forward_till20cm()
{
  digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;
  if(dist>20 && dist2>20)
  {
while((dist-dist2) <1 && (dist-dist2)>-1 )
{
  digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, HIGH);
  digitalWrite(M2_P1, HIGH);
  digitalWrite(M2_P2, LOW);
    Serial.println("Moving Forward");
digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;
}
  }
  else
  {
    digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, LOW);
  digitalWrite(M2_P1, LOW);
  digitalWrite(M2_P2, LOW);
    Serial.println("Stopped");
}
}
void OnPointRotate()
{
  digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;
if((dist-dist2) <1 && (dist-dist2)>-1)
    {
      digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, LOW);
  digitalWrite(M2_P1, LOW);
  digitalWrite(M2_P2, LOW);
      Serial.println("Stopped");return;
    }
  while(dist-dist2>1)
  {
    digitalWrite(M1_P1, LOW);
  digitalWrite(M1_P2, HIGH);
  analogWrite(M2_P1, 127);
  digitalWrite(M2_P2, LOW);
    Serial.println("Rotating Right");
    digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;
  }  
  digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;
  while(dist-dist2<-1)
  {
    digitalWrite(M1_P1, LOW);
  analogWrite(M1_P2, 127);
  digitalWrite(M2_P1, HIGH);
  digitalWrite(M2_P2, LOW);
    Serial.println("Rotating Left");
    digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;    
  }      
 }
void loop()
{
digitalWrite(US1_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US1_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US1_trig,LOW);
  time=pulseIn(US1_echo,HIGH);
  dist=(0.034/2)*time;
  digitalWrite(US2_trig,LOW);
  delayMicroseconds(2);
  digitalWrite(US2_trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(US2_trig,LOW);
  time=pulseIn(US2_echo,HIGH);
  dist2=(0.034/2)*time;
  if(!((dist-dist2) <1 && (dist-dist2)>-1))
  {
  while(!((dist-dist2) <1 && (dist-dist2)>-1))
{
  OnPointRotate();
}
  }
else
  forward_till20cm();

}
