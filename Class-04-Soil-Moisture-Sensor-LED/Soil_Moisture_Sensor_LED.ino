int redLedPin = 3;
int whiteLedPin = 10;

void setup() {
  Serial.begin(9600);

  pinMode(redLedPin, OUTPUT);
  pinMode(whiteLedPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0); 

  Serial.println(sensorValue);

  if (sensorValue >= 0 && sensorValue <=500) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(whiteLedPin, LOW);
  }



  else if (sensorValue >= 501 && sensorValue <= 800) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(whiteLedPin, HIGH);
  }


  else if (sensorValue >= 801 && sensorValue <= 1023) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(whiteLedPin, HIGH);
  }
 
  delay(100);
}
