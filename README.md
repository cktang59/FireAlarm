# Fire & High Temperature Alarm System (Arduino)

An automated fire and high-temperature detection system built with Arduino UNO and a DHT11 sensor. When the ambient temperature exceeds **32°C**, the system automatically triggers an alarm output.

---

## 🛠 Hardware Components

* **1x** Arduino UNO R3
* **1x** DHT11 Temperature & Humidity Sensor
* **1x** Buzzer / LED Alarm Indicator
* **1x** Breadboard
* Jumper Wires & USB Cable

---

## 🔌 Pin Connections

Based on `FireAlarm.ino`:

| Component | Pin / Function | Arduino Pin |
| :--- | :--- | :--- |
| **DHT11 Sensor** | Data Pin (`readPin`) | `Digital Pin 7` |
| **Alarm Output** | Trigger Pin (`potent_trigger`) | `Digital Pin 13` |
| **Power** | `VCC` / `GND` | `5V` / `GND` |

---

## ⚙️ Logic & Thresholds

* **Temperature Sensor:** Reads temperature in Celsius (`TempC`).
* **Threshold Condition:** 
  * If **`TempC > 32°C`** ➔ Pin 13 goes **`HIGH`** (Alarm ON).
  * If **`TempC <= 32°C`** ➔ Pin 13 goes **`LOW`** (Alarm OFF).
* **Sampling Rate:** Reads sensor data every 1 second (`1000ms`).

---

## 🚀 How to Run

1. **Clone or Download the Repository:**
   ```bash
   git clone [https://github.com/cktang59/FireAlarm.git](https://github.com/cktang59/FireAlarm.git)
