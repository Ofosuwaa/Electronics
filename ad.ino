// Experiment 3: Reading the Potentiometer using ESP32

const int potPin = 12; // GPIO12 (input-only)

void setup() {
  Serial.begin(115200); // Start Serial Monitor
}

void loop() {
  int potValue = analogRead(potPin); // Read analog value (0-4095)

  Serial.print("Potentiometer Value: ");
  Serial.println(potValue); // Print the value

  delay(200); // Delay for readability
}
