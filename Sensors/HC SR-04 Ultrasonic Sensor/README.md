# Test the Module – Ultrasonic Sensor (HC-SR04)

The **HC-SR04 Ultrasonic Sensor** is a popular distance-measuring sensor used in
**robotics, IoT, and embedded systems**. It measures distance by emitting
ultrasonic sound waves and calculating the time taken for the echo to return.

This test verifies that the ultrasonic sensor is:
- Properly powered
- Correctly wired (Trigger & Echo)
- Accurately measuring distance
- Producing stable serial output

---

## 📌 Why Test the Ultrasonic Sensor First?

Ultrasonic sensors are sensitive to:
- Incorrect pin wiring
- Improper trigger timing
- Surface type and angle
- Electrical noise

Testing the module separately helps you:
- Confirm the sensor is functional
- Verify distance accuracy
- Avoid false readings in final projects

---

## 📦 Module Overview – HC-SR04

**Key Features:**
- Ultrasonic distance measurement
- Non-contact sensing
- High accuracy and reliability
- Low cost and easy to use

**Operating Voltage:**  
- **5V**

**Measurement Range:**  
- **2 cm to 400 cm**

**Accuracy:**  
- Approximately **±3 mm**

---

## 🧠 How the HC-SR04 Works

1. Arduino sends a **10 µs HIGH pulse** to the **Trig** pin  
2. The sensor emits **40 kHz ultrasonic waves**  
3. Sound waves hit an object and reflect back  
4. The **Echo** pin stays HIGH for the duration of the return time  
5. Distance is calculated using the speed of sound

---

## 🔌 Connections (Arduino UNO)

| HC-SR04 Pin | Arduino UNO | Description |
|------------|------------|-------------|
| VCC | 5V | Power supply |
| GND | GND | Common ground |
| Trig | D9 | Trigger input |
| Echo | D10 | Echo output |

---

## 📂 Files in This Folder

| File | Description |
|-----|-------------|
| `ultrasonic_test.ino` | Ultrasonic sensor testing code |
| `README.md` | Documentation |

---

## 🧠 What This Test Code Does

- Sends trigger pulses to the sensor
- Measures echo pulse duration
- Calculates distance in centimeters
- Prints live distance data to Serial Monitor
- Uses built-in LED (Pin 13) as a proximity indicator

---

## 🚀 How to Test

1. Make connections as per the table above  
2. Upload `ultrasonic_test.ino` to Arduino UNO  
3. Open **Serial Monitor**  
   - Baud rate: **9600**
4. Place an object in front of the sensor  

---

## ✅ Expected Output

### Object detected within range:
```Distance: 23.45 cm```
Built-in LED → ON (if distance < threshold)

### No object or out of range:
```No echo detected```
Built-in LED → OFF

**🧪 Test Results**
Test Condition	Result:
• Power ON	✅ Passed
• Trigger signal	✅ Passed
• Echo detection	✅ Passed
• Distance calculation	✅ Passed
• Serial output stability	✅ Passed

**⚠️ Common Issues & Troubleshooting**
### ❌ Distance Always 0
• Possible Causes:
• Echo pin not connected
• Incorrect pin mapping

Fix:
• Recheck wiring
• Confirm pin numbers in code

**❌ Random or Fluctuating Values**

Possible Causes:
• Soft or angled surfaces
• Electrical noise

Fix:
• Use flat reflective objects
• Add small delays or averaging

**❌ No Echo Detected**

• Possible Causes:
• Object out of range
• Sound-absorbing surfaces (cloth, foam)

Fix:
• Move object closer
• Test with hard surfaces

**🧠 Typical Use Cases**

• Obstacle avoidance robots
• Distance measurement systems
• Water level detection
• Parking assistance
• Smart automation projects

📚 Part of the Series

**Test the Module**
A practical testing series for:
• Microcontrollers
• Sensors
• Communication modules
• Embedded hardware

**🛠️ License**

This project is open-source.
• You are free to:
• Use
• Modify
• Share
• Learn from this code
• Attribution is appreciated but not required.

Test before you trust.
Happy building 🚀

