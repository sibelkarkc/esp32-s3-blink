const int ledPin = 4; // ESP32-S3 üzerinde güvenli GPIO 4 pini

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // LED'i yak
  delay(1000);                // 1 saniye bekle
  digitalWrite(ledPin, LOW);  // LED'i söndür
  delay(1000);                // 1 saniye bekle
}
