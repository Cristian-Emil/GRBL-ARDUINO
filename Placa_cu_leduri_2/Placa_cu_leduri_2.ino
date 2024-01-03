// actiune ledului, dupa ce se aprinde 3 secunde prima data trece in modul 
// o secunda jumatate aprins, o secunda jumatate stins

// AICI DEFINIM LOCUL UNDE CONECTAM PINII - la pinul 12
#define LED_PIN 12

void setup() {
  pinMode(LED_PIN, OUTPUT);   //aici definim ce face pinul 12 - este un OUTPUT
  digitalWrite(LED_PIN,HIGH); //aici definim STAREA pinului 12 - LOW este default
  delay(3000);                //stabilim o interziere de 3000 ms 
}

void loop() {
  digitalWrite(LED_PIN, LOW);  //definim actiunea din bucla - actiunea 1- stins
  delay(1500);
  digitalWrite(LED_PIN, HIGH); //definim actiunea din bucla - actiunea 2 - aprins
  delay(1500); 
}

