# 🌱 Smart Irrigation System using Arduino Uno

An intelligent irrigation system that automatically monitors soil moisture and waters plants when required. This project helps reduce water wastage by activating a water pump only when the soil becomes dry.

The system uses an Arduino Uno, Soil Moisture Sensor, OLED Display, Relay Module, Water Pump, Traffic Light Module, and Buzzer to provide real-time monitoring and automatic irrigation.

---

## 📸 Project Images

### Hardware Setup
![Hardware Setup](images/hardware_setup.jpg)

### Circuit Connection
![Circuit Diagram](images/circuit_diagram.png)

### OLED Display Output
![OLED Display](images/oled_display.jpg)

### Project Working
![Project Working](images/project_working.jpg)

> Replace the image filenames with your actual image names after uploading them to GitHub.

---

## 🎯 Objectives

- Monitor soil moisture in real time.
- Automatically control irrigation based on soil conditions.
- Reduce water consumption.
- Provide visual and audio status indications.
- Display system information on an OLED screen.

---

## ✨ Features

- Automatic irrigation control
- Real-time soil moisture monitoring
- OLED display for moisture percentage and pump status
- Traffic light status indication
- Buzzer alerts during pump operation
- Water-saving automation
- Simple and cost-effective implementation

---

## 🛠 Components Required

| Component | Quantity |
|------------|------------|
| Arduino Uno | 1 |
| Soil Moisture Sensor | 1 |
| OLED Display (0.96" I2C) | 1 |
| 5V Relay Module | 1 |
| Mini Water Pump | 1 |
| Traffic Light Module | 1 |
| Active Buzzer Module | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| External 5V Supply | 1 |

---

## 🔌 Circuit Connections

### Soil Moisture Sensor

| Soil Sensor | Arduino Uno |
|------------|------------|
| VCC | 5V |
| GND | GND |
| A0 | A0 |

### OLED Display (I2C)

| OLED | Arduino Uno |
|-------|------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### Relay Module

| Relay | Arduino Uno |
|--------|------------|
| VCC | 5V |
| GND | GND |
| IN | D7 |

### Traffic Light Module

| Module Pin | Arduino Uno |
|------------|------------|
| Red LED | D4 |
| Yellow LED | D5 |
| Green LED | D6 |
| GND | GND |

### Buzzer Module

| Buzzer | Arduino Uno |
|---------|------------|
| VCC | 5V |
| GND | GND |
| Signal | D8 |

### Water Pump Connection

- Pump Positive → Relay NO
- Relay COM → External 5V Positive
- Pump Negative → External 5V Negative

---

## ⚙️ Working Principle

1. The Soil Moisture Sensor continuously measures the moisture level of the soil.
2. Arduino converts the sensor reading into a moisture percentage.
3. Based on the moisture value, the system determines the soil condition:

### Dry Soil (0–40%)

- Red LED ON
- Water Pump ON
- Buzzer Alert Activated
- OLED Displays Pump Status

### Moderate Moisture (41–70%)

- Yellow LED ON
- Water Pump OFF

### Wet Soil (71–100%)

- Green LED ON
- Water Pump OFF

4. The OLED screen displays:
   - Soil Moisture Percentage
   - Pump Status
   - Moisture Progress Bar

---

## 📊 System Status Indicators

| Moisture Level | Soil Condition | LED | Pump |
|---------------|---------------|------|------|
| 0% - 40% | Dry | 🔴 Red | ON |
| 41% - 70% | Moderate | 🟡 Yellow | OFF |
| 71% - 100% | Wet | 🟢 Green | OFF |

---

## 📂 Project Structure

```text
Smart-Irrigation-System/
│
├── code/
│   └── Smart_Irrigation_System.ino
│
├── images/
│   ├── hardware_setup.jpg
│   ├── circuit_diagram.png
│   ├── oled_display.jpg
│   └── project_working.jpg
│
├── README.md
└── LICENSE
```

---

## 📈 Applications

- Smart Agriculture
- Home Gardening
- Greenhouse Automation
- Water Conservation Systems
- Agricultural Research
- Educational Projects

---

## 🚀 Future Enhancements

- ESP8266/ESP32 IoT Integration
- Mobile App Monitoring
- Firebase Cloud Dashboard
- Rain Sensor Integration
- Water Tank Level Monitoring
- SMS/Email Notifications
- Weather-Based Irrigation
- AI-Powered Irrigation Scheduling

---

## 🧑‍💻 Author

**Arun Roshan**

Ph.D. Research Scholar  
VIT Vellore

Research Area:
- Internet of Things (IoT)
- Artificial Intelligence (AI)
- Machine Learning (ML)
- Assistive Technologies

---
Output images 

<img width="2000" height="2000" alt="2_20260301_175428_0001" src="https://github.com/user-attachments/assets/834bebae-3d3b-41b8-9528-a4ea31d42cf0" />


## ⭐ Support

If you found this project useful, please consider giving it a ⭐ on GitHub.

Your support helps encourage the development of more Arduino, IoT, and Smart Agriculture projects.

---

## 📜 License

This project is licensed under the MIT License.

Feel free to use, modify, and distribute this project for educational and research purposes.
