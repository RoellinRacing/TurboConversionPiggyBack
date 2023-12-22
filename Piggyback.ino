const int relayPin = 9;
const int sensorPin = 2; // Angenommen, der Sensor gibt ein digitales HIGH-Signal aus, wenn der Druck 0,1 Bar erreicht

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {
  if (digitalRead(sensorPin) == HIGH) {
    digitalWrite(relayPin, HIGH);
  } else {
    digitalWrite(relayPin, LOW);
  }
}
