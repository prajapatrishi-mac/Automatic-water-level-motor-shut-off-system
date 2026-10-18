#define SENSOR_PIN A0
#define RELAY_PIN 7

#define RELAY_ON LOW
#define RELAY_OFF HIGH

int WATER_THRESHOLD = 700;

void setup() {
  Serial.begin(9600);

  pinMode(SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, RELAY_OFF);

  Serial.println("AUTOMATIC WATER TANK SYSTEM");
  Serial.println("Developed by Ritik Prajapat");

  delay(2000);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue < WATER_THRESHOLD) {
    digitalWrite(RELAY_PIN, RELAY_OFF);
    Serial.println("TANK FULL");
    Serial.println("PUMP OFF");
  }
  else {
    digitalWrite(RELAY_PIN, RELAY_ON);
    Serial.println("TANK NOT FULL");
    Serial.println("PUMP ON");
  }

  Serial.println("--------------------");
  delay(500);
}
