![LDR(PhotoResistor)](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/LDR(PhotoResistor).PNG)

# CODE:  
```
int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  analogWrite(9, map(sensorValue, 0, 1023, 255, 0));
  delay(10); // Wait for 100 millisecond(s)
}
```
