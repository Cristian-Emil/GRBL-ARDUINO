void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  Serial.println("LED on");
  digitalWrite(13,HIGH);
  delay(5000);
  Serial.println("LED off");
  digitalWrite(13,LOW);
  delay(15000);
}
