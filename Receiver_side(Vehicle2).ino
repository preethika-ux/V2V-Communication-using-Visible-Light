int sensorPin = A0;
int threshold = 50;   // Lower threshold for Tinkercad testing

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  if (sensorValue > threshold) {
    Serial.println("Light pulse detected → Vehicle moving");
  } else {
    Serial.println("No pulse → Vehicle stopped");
  }

  delay(50);
}