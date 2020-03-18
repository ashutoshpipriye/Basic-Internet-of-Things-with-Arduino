#include<Servo.h>
Servo S1;
void setup() {
  S1.attach(10);
}

void loop() {
  int i;
  for(i=0;i<=180;i+=30)
  {
    S1.write(i);
    Serial.println(i);
    delay(1000);
  }
  for(i=180;i>=0;i-=30)
  {
    S1.write(i);
    Serial.println(i);
    delay(1000);
  }
}
