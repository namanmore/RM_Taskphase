![yo](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/PIR%20Motion%20Sensor.PNG)
# CODE:  
```
int ir=4,led=13,val=0;;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val=digitalRead(ir);
  if(val== HIGH)
  {
  digitalWrite(led, HIGH);
   Serial.println("Object Detected");
  }
  else
  digitalWrite(led, LOW); 
}
```
