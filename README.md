# ESP32 IR Infrared Sensor Project

## Project Overview
This project demonstrates how to use an IR infrared sensor with an ESP32 microcontroller to detect the presence of objects. IR sensors are commonly used in proximity sensing applications where non-contact detection is required.

## Components Needed
- ESP32 Microcontroller
- IR Infrared Sensor Module
- Jumper Wires
- Breadboard

## Block diagram


## Circuit Setup
1. **Connecting the IR Infrared Sensor to ESP32:**
   - Connect the digital output pin of the IR sensor module to GPIO pin 15 on the ESP32.
   - Ensure the power and ground connections of the IR sensor module are properly connected to the ESP32.

## Instructions
1. **Setup:**
   - Initialize GPIO pin for the IR sensor using `pinMode()` in the `setup()` function.
   - Start serial communication at a baud rate of 115200 for debugging.

2. **Operation:**
   - In the `loop()` function:
     - Read the digital state of the IR sensor using `digitalRead(irSensorPin)`.
     - If an object is detected (LOW state), print "Object detected!" to the Serial Monitor.
     - If no object is detected (HIGH state), print "No object detected." to the Serial Monitor.

3. **Considerations:**
   - **Sensor Sensitivity:** Adjust the sensitivity and placement of the IR sensor to optimize object detection.
   - **Environment:** Minimize interference from ambient IR sources to ensure accurate detection.
   - **Application:** Customize detection thresholds or responses based on specific project requirements.

## Applications
- **Proximity Sensing:** Detect the presence of objects without physical contact.
- **Obstacle Avoidance:** Implement in robotics for obstacle detection and avoidance.
- **Automation:** Use in automated systems for object presence detection.

## Notes
- **Sensor Calibration:** Calibrate the sensor based on the distance and reflective properties of the objects being detected.
- **Serial Output:** Utilize the Serial Monitor for real-time monitoring and debugging sensor readings.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 IR Infrared Sensor](https://projectslearner.com/learn/esp32-ir-infrared-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner