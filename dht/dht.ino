#include <dht.h>
dht dht1;
void setup(){
  Serial.begin(9600);
  delay(500);
}

void loop(){
  dht1.read11(7);
  Serial.print("Temperature is :");
  Serial.println(dht1.temperature);
  Serial.print("Humidity is :");
  Serial.println(dht1.humidity);
  delay(2000);
}
