void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}
void loop() {
  if (Serial.available() > 0)
  {
    char data = Serial.read();
    switch (data)
    {
      case 'o': digitalWrite(13, HIGH);
        break;
      case 'f': digitalWrite(13, LOW);
        break;
      case 'a': for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
          analogWrite(11, fadeValue);
          delay(30);
        }
        for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
          analogWrite(13, fadeValue);
          delay(30);
        }
        break;
      default: break;
    }
    Serial.println(data);

  }
  delay(50);
}
