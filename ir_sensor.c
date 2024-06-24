/*
    Project name : ESP32 IR Infrared Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-ir-infrared-sensor
*/

const int irSensorPin = 15; // Pin connected to the digital output of the IR sensor

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(irSensorPin, INPUT); // Set IR sensor pin as INPUT
}

void loop() {
  int irState = digitalRead(irSensorPin); // Read the state of the IR sensor

  if (irState == LOW) { // If object is detected (LOW state)
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(500); // Add a small delay before the next reading
}
