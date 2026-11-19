
int sensorPin = A0;

int sensorValue = 0;
int passengerDetected = 0;

int threshold = 512;

void setup() {
  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(sensorPin);

  if (sensorValue >= threshold) {
    passengerDetected = 1;
  }
  else {
    passengerDetected = 0;
  }

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);

  Serial.print(" | Passenger: ");
  Serial.println(passengerDetected);

  delay(500);
}
