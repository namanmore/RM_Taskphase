![yo](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/Blinking.PNG)  
# CODE:  
```
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
```
