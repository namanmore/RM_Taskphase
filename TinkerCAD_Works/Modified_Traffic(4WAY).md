![yo](https://github.com/namanmore/RM_Taskphase/blob/main/TinkerCAD_Works/Circuits/Modified_Traffic(4%20WAY).PNG)  
# CODE:
 ```
 int led_red_N = 2;
int led_yellow_N = 1;
int led_green_N = 0;
int led_red_E = 8;
int led_yellow_E = 7;
int led_green_E = 6;
int led_red_S = 9;
int led_yellow_S = 10;
int led_green_S = 11;
int led_red_W = 5;
int led_yellow_W = 4;
int led_green_W = 3; 

void setup() {
  pinMode(led_red_N, OUTPUT);
  pinMode(led_yellow_N, OUTPUT);
  pinMode(led_green_N, OUTPUT);
  pinMode(led_red_E, OUTPUT);
  pinMode(led_yellow_E, OUTPUT);
  pinMode(led_green_E, OUTPUT);
  pinMode(led_red_W, OUTPUT);
  pinMode(led_yellow_W, OUTPUT);
  pinMode(led_green_W, OUTPUT);
  pinMode(led_red_S, OUTPUT);
  pinMode(led_yellow_S, OUTPUT);
  pinMode(led_green_S, OUTPUT);
}

void loop() {
digitalWrite(led_red_N, LOW); 
  digitalWrite(led_yellow_N, LOW);
  digitalWrite(led_green_N, HIGH);
  digitalWrite(led_red_E, LOW);
  digitalWrite(led_yellow_E, HIGH);
  digitalWrite(led_green_E, LOW);
  digitalWrite(led_red_S, HIGH); 
  digitalWrite(led_yellow_S, LOW);
  digitalWrite(led_green_S, LOW);
  digitalWrite(led_red_W, HIGH);
  digitalWrite(led_yellow_W, LOW);
  digitalWrite(led_green_W, LOW);
  delay(5000);
  digitalWrite(led_red_N, HIGH); 
  digitalWrite(led_yellow_N, LOW);
  digitalWrite(led_green_N, LOW);
  digitalWrite(led_red_E, LOW);
  digitalWrite(led_yellow_E, LOW);
  digitalWrite(led_green_E, HIGH);
  digitalWrite(led_red_S, LOW); 
  digitalWrite(led_yellow_S, HIGH);
  digitalWrite(led_green_S, LOW);
  digitalWrite(led_red_W, HIGH);
  digitalWrite(led_yellow_W, LOW);
  digitalWrite(led_green_W, LOW);
  delay(5000);
  digitalWrite(led_red_N, HIGH); 
  digitalWrite(led_yellow_N, LOW);
  digitalWrite(led_green_N, LOW);
  digitalWrite(led_red_E, HIGH);
  digitalWrite(led_yellow_E, LOW);
  digitalWrite(led_green_E, LOW);
  digitalWrite(led_red_S, LOW); 
  digitalWrite(led_yellow_S, LOW);
  digitalWrite(led_green_S, HIGH);
  digitalWrite(led_red_W, LOW);
  digitalWrite(led_yellow_W, HIGH);
  digitalWrite(led_green_W, LOW);
  delay(5000);
  digitalWrite(led_red_N, LOW); 
  digitalWrite(led_yellow_N, HIGH);
  digitalWrite(led_green_N, LOW);
  digitalWrite(led_red_E, HIGH);
  digitalWrite(led_yellow_E, LOW);
  digitalWrite(led_green_E, LOW);
  digitalWrite(led_red_S, HIGH); 
  digitalWrite(led_yellow_S, LOW);
  digitalWrite(led_green_S, LOW);
  digitalWrite(led_red_W, LOW);
  digitalWrite(led_yellow_W, LOW);
  digitalWrite(led_green_W, HIGH);
  delay(5000);
}
```
