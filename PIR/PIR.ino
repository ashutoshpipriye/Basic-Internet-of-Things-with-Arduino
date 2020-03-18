int led=7;
int PIR=8;
void setup() {
  pinMode(PIR,INPUT);
  pinMode(led, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  int s=digitalRead(PIR);
  if(s==1)
  {
    digitalWrite(led, HIGH);
    Serial.println("Motion Detected");
  }
  else if(s==0)
  {
    digitalWrite(led, LOW);
    Serial.println("Motion not Detected");
  }
  
}
