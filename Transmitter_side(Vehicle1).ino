/*
  V2V VLC Communication - Transmitter (Tinkercad version)
  Components: Arduino UNO + Potentiometer + LED
*/

int potPin = A0;   // Potentiometer
int ledPin = 9;    // LED on D9

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);   // Read potentiometer (0–1023)
  float velocity = map(potValue, 0, 1023, 0, 200); // Simulated velocity

  // Map velocity to blink frequency
  int freq = map(velocity, 0, 200, 1000, 100);  

  // Blink LED to transmit data
  digitalWrite(ledPin, HIGH);
  delayMicroseconds(freq);
  digitalWrite(ledPin, LOW);
  delayMicroseconds(freq);

  Serial.print("Velocity: ");
  Serial.println(velocity);
}
