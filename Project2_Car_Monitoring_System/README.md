# 🚗 Project 2: Car Monitoring System with ESP32, DHT11, OLED & Blynk

## 📖 Overview
This project is an **IoT-enabled car monitoring system** built using an **ESP32 microcontroller**, a **DHT11 sensor** for temperature & humidity, an **OLED display** for local visualization, and **Blynk IoT app** for real-time remote monitoring.  
The system runs on **3 batteries** making it lightweight and portable.  

---

## 🛠️ Components
- ESP32 Dev Board  
- DHT11 Temperature & Humidity Sensor  
- 0.96" OLED Display (I2C)  
- 3 × 18650 Li-ion Batteries (with voltage divider for monitoring)  
- Blynk IoT App (Cloud Dashboard)  

---

## ⚙️ Features
- 🌡️ Measure **temperature & humidity** using DHT11  
- 📟 Show live readings on **OLED screen**  
- 📲 Send data to **Blynk mobile dashboard**  
- 🔋 Monitor **battery voltage** (via ADC)  
- 🚗 Portable, battery-powered system  

---

## 📐 Circuit Diagram
Add your circuit diagram inside `docs/schematic.png`  

Example wiring:  
- DHT11 → GPIO4  
- OLED (I2C) → SDA (GPIO21), SCL (GPIO22)  
- Battery Voltage → ADC pin GPIO34 (through voltage divider)  

---

## 📲 Blynk Dashboard
Recommended Blynk virtual pins:  
- **V1** → Temperature (°C)  
- **V2** → Humidity (%)  
- **V3** → Battery Voltage (V)  

---

## 📂 File Structure
