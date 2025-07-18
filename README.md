# Water-Level-Indicator-using-Arduino
This project demonstrates a simple water level indicator using an analog water sensor and three LEDs (Red, Yellow, and Green) to display the water level status.

##  Components

- Arduino Uno or Nano  
- Analog Water Sensor  
- Red LED  
- Yellow LED  
- Green LED  
- 220Ω resistors (one for each LED)  
- Breadboard and jumper wires

##  Circuit Description

- The analog water sensor is connected to pin `A0`.
- The Red LED is connected to pin `9`.
- The Yellow LED is connected to pin `10`.
- The Green LED is connected to pin `11`.

##  Behavior

Based on the sensor reading, the Arduino determines the water level and turns on the appropriate LED:

- **sensorValue > 600** → Low water level → **Green LED ON**
- **200 ≤ sensorValue < 600** → Medium water level → **Yellow LED ON**
- **sensorValue < 200** → High water level → **Red LED ON**

> Note: You may want to adjust the logic if you prefer the red LED to indicate low water and the green LED for high water.
