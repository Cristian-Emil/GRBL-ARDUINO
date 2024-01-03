// definim actiunea ledului de pe placa sa sclipeasca 
// si sa se afiseze rezultatele actiunii la consola. 
int PIN13 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(PIN13, OUTPUT);
}

void loop() {
  Serial.println("LED on");
  digitalWrite(PIN13, HIGH);
  delay(2500);
  Serial.println("LED off");
  digitalWrite(PIN13, LOW);
  delay(1500);
}
