![yo](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/Ultrasonic_Sensor.PNG)  
# CODE:  
```
int dist,trig=10, echo=11,time;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  time=pulseIn(echo,HIGH);
  dist= time* (0.03/2);
  Serial.print(dist);
  Serial.println("cm");
}
```
