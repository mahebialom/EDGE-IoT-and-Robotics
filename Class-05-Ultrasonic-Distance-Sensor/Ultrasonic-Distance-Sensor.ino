float Inch = 0.00;
float cm = 0.00;
int SonarPin = A2;
int sensorValue;
int LED=5;
void setup() {
  pinMode(SonarPin, INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(SonarPin);
  delay(50);

  Inch = (sensorValue * 0.497);
  cm = Inch * 2.54;
 // Serial.println(sensorValue);
  Serial.println(Inch);
  //Serial.println("inch");
 // Serial.print(cm);
 // Serial.println("cm");
  delay(1);
  if(Inch>=23 && Inch<=25){
     digitalWrite(LED, HIGH);
  }
  else
   digitalWrite(LED, LOW);
}