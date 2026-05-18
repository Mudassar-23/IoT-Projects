## 🌐 Internet of Things (IoT) Projects


### 🌡️ Environmental Monitoring System

Monitor real-time Air Quality.

**How It Works:**
- Monitors real-time environmental conditions including temperature, air quality, and dust levels. 
- Data is sent to a **Blynk App** and web dashboard. 
- If gas or dust exceeds threshold, a **red LED** is activated as an **alert indicator**.

**Components:** DHT11 sensor, optical dust sensor, gas sensor (MQ135), ESP8266, Blynk platform.

---

### ✅ Smart IoT RFID Attendance System

A smart and efficient attendance system using **RFID**, **NodeMCU ESP8266**, and **Google Sheets** as a cloud database.

**How It Works:**
- RFID card is scanned using the **MFRC522** module.
- **NodeMCU** sends UID to a **Google Apps Script Web App** via HTTP GET.
- Data is logged into **Google Sheets** automatically.
- Feedback is shown in the **Arduino Serial Monitor** and confirmed via a buzzer.

---

### 💡 Smart Light System

Control lights using your **smartphone** or **voice assistants** (e.g., Alexa).

**How It Works:**
- ESP8266/ESP32 is connected to a relay module and light bulb.
- Control is done via mobile app or voice using **Bluetooth**.
  
---

## How to Run the Project

1. Clone the repository to your local machine:

```bash
 git clone https://github.com/Mudassar-23/IoT-Projects.git
```
