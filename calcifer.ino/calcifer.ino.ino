// Calcifer 0.1 2016-November
// By PumpkinPai, with love

const int relay01 = 10;  //relay #1 on pin 10

void setup() {
  // relay #1 supa-dupa
  pinMode(relay01, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(relay01, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(relay01, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

}
