# Test the Module – ADXL345 Accelerometer

The **ADXL345** is a low-power, 3-axis digital accelerometer commonly used in
**robotics, IoT, wearables, motion sensing, and orientation detection**.

This module supports **I²C and SPI communication** and can measure acceleration
along **X, Y, and Z axes**.

In this test, we verify that the ADXL345 sensor is:
- Properly powered
- Communicating over I²C
- Producing valid acceleration data

---

## 📌 Why Test ADXL345 First?

Many projects fail due to:
- Wrong voltage (5V damage)
- Incorrect I²C wiring
- Address mismatch
- Assuming sensor works without verification

This test helps you:
- Confirm sensor health
- Understand axis behavior
- Validate real-time motion response

---

## 📦 Module Overview – ADXL345

**Features:**
- 3-axis acceleration sensing
- ±2g / ±4g / ±8g / ±16g selectable range
- I²C & SPI interfaces
- Low power consumption
- Built-in motion & tap detection (advanced)

**Operating Voltage:**  
⚠️ **3.3V ONLY** (Not 5V tolerant)

---

## 🔌 Connections (I²C Mode – Arduino UNO)

| ADXL345 Pin | Arduino UNO | Description |
|------------|-------------|-------------|
| VCC | 3.3V | Power (⚠️ DO NOT use 5V) |
| GND | GND | Common ground |
| SDA | A4 | I²C Data |
| SCL | A5 | I²C Clock |
| CS | 3.3V | Enables I²C mode |
| SDO | GND | Sets I²C address to `0x53` |
| INT1 | Not connected | Optional |
| INT2 | Not connected | Optional |

### ℹ I²C Address Selection
- `0x53` → SDO connected to **GND**
- `0x1D` → SDO connected to **VCC**

---

## 📚 Library Requirements

Install the following libraries using **Arduino Library Manager**:

- **Adafruit ADXL345 Unified**
- **Adafruit Unified Sensor**

---

## 📂 Files in This Folder

| File | Description |
|-----|-------------|
| `adxl345_test.ino` | ADXL345 basic testing code |
| `README.md` | Documentation |

---

## 🧠 What This Test Code Does

- Initializes ADXL345 using I²C
- Reads acceleration values along X, Y, and Z axes
- Converts raw acceleration into **g units**
- Continuously prints live data to Serial Monitor
- Helps visualize orientation, tilt, and motion

---

## 🚀 How to Use

1. Make connections as per table above  
2. Power the ADXL345 using **3.3V**
3. Upload `adxl345_test.ino`
4. Open Serial Monitor  
   - Baud rate: **9600**
5. Tilt, rotate, or move the sensor

---

## ✅ Expected Output

When the sensor is **lying flat on a surface**:

`X: ~0.00 g   Y: ~0.00 g   Z: ~1.00 g`

## When tilted:

• X or Y value increases or decreases
• Z value reduces depending on orientation

## When shaken:

• All three axis values fluctuate rapidly
• This confirms the ADXL345 is working correctly.

###⚠️ Common Issues & Troubleshooting

**❌ Sensor Not Detected**
• Ensure VCC is 3.3V
• Verify SDA and SCL connections
• Check I²C address (0x53 or 0x1D)
• Run an I²C scanner if needed

**❌ Constant or Incorrect Values**
• Loose wiring
• Damaged sensor (often due to accidental 5V supply)

**🧠 Recommended Next Tests (Advanced)**
• Tap / double-tap detection
• Free-fall detection
• Motion interrupts using INT1 / INT2
• Orientation-based control logic

**📚 Part of the Series**
`Test the Module`

A practical testing series for:
• Microcontrollers
• Sensors
• Communication modules
• Embedded hardware

**🛠️ License**

Open-source.
Free to use, modify, and share for learning and development.

Test before you trust.
Happy building 🚀
