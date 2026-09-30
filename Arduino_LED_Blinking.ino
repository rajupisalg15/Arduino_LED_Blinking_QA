// Arduino LED Blinking - Project Management Activity 2
// Author: Raju Pisal

const int LED_PIN = LED_BUILTIN;
const unsigned long ON_TIME = 1000;
const unsigned long OFF_TIME = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(ON_TIME);
  digitalWrite(LED_PIN, LOW);
  delay(OFF_TIME);
}
