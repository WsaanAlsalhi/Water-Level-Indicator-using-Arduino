int waterSensorPin = A0;

int redPin = 9;
int yellowPin = 10;
int greenPin = 11;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(waterSensorPin);
  Serial.print("Water Level: ");
  Serial.println(sensorValue);

  // Turn off all LEDs first
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);

  if (sensorValue > 600) {
    // Low water level → Turn on the green LED
    digitalWrite(greenPin, HIGH);
  } else if (sensorValue >= 200 && sensorValue < 600) {
    // Medium water level → Turn on the yellow LED
    digitalWrite(yellowPin, HIGH);
  } else {
    // High water level → Turn on the red LED
    digitalWrite(redPin, HIGH);
  }

  delay(500);
}

