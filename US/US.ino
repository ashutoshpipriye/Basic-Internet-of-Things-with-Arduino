 const int trigPin = 8;
const int echoPin = 9;
const int led1 = 11;
long duration;
float distance;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(led1, OUTPUT);
 
}

void loop() 
{
  Serial.begin(9600);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

if(distance>=20){
  digitalWrite(led1,HIGH);
}else{
  digitalWrite(led1,LOW);
}

   Serial.println(distance);
    delay(100);
}
