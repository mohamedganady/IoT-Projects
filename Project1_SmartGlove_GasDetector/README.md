# 🧤 Smart Glove – IoT Gas Detection with Blynk & Buzzer Alerts  


[![License](https://img.shields.io/badge/License-MIT-green.svg)](../LICENSE)  
![Platform](https://img.shields.io/badge/Platform-ESP32/ESP8266-blue)  
![IoT](https://img.shields.io/badge/Category-IoT-orange)  

## 📖 Overview
The **Smart Glove** is a wearable IoT device designed to improve safety by detecting harmful gases with an **MQ-series sensor**.  
It provides **dual alerts**:  
- 🔔 **Local buzzer alarm** when gas exceeds safe levels.  
- 📱 **Remote notification** via the **Blynk IoT mobile app**.  

This project is part of the **IoT-Projects Collection**.

---

## 🚀 Features
- 📡 Real-time gas monitoring with MQ-2 / MQ-135 sensor.  
- 📱 Cloud-based notifications through **Blynk App**.  
- 🔊 Local buzzer alarm when gas crosses threshold.  
- 🧤 Wearable design (sensor and ESP32 mounted on a glove).  
- 🔋 Battery-powered and portable.  
- ⚡ Easily extendable with more IoT sensors.  

---

## 🛠️ Hardware Requirements
- ESP32 (recommended) or ESP8266  
- MQ5 Gas Sensor  
- **Active buzzer module** (for local alarm)  
- Breadboard + jumper wires  
- Power source (LiPo battery or USB)  
- A glove (wearable prototype)  

---

## 🧑‍💻 Software Requirements
- Arduino IDE or PlatformIO  
- Blynk IoT App (Android / iOS)  
- Required Libraries:  
  - `WiFi.h`  
  - `BlynkSimpleEsp32.h` *(or `BlynkSimpleEsp8266.h`)*  

---


```text
ESP32 ---- MQ Sensor
3V3   → VCC
GND   → GND
D34   → A0 (sensor output)

ESP32 ---- Buzzer
D25   → + (signal)
GND   → - (ground)

