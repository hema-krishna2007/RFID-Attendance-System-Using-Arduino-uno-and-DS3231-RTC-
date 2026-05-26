# RFID-Attendance-System-Using-Arduino-uno-and-DS3231-RTC-

This project is an RFID-based smart attendance system developed using Arduino Uno, RFID RC522 module, and DS3231 RTC module.

The system identifies students using RFID cards and records attendance with accurate date and time. The attendance information is displayed through the Arduino Serial Monitor.

This project demonstrates the implementation of embedded systems, RFID technology, and real-time clock modules in real-world applications.

---

# 🧠 Project Overview
The RFID Attendance System is designed to automate the attendance process using RFID technology. Each student is assigned a unique RFID card. When the card is scanned using the RFID reader, the Arduino checks the card UID, identifies the student, and records attendance along with current date and time from the RTC module.

This project eliminates manual attendance processes and improves accuracy and efficiency.

---

# ⚙️ System Architecture Flow

```text
RFID Card 
   ↓
RFID Reader (RC522)
   ↓
Arduino Uno
   ↓
RTC Module (DS3231)
   ↓
Serial Monitor Output
```

---

# 🔄 Working Flow

1. The RFID card is scanned using the RC522 reader.
2. The RFID module reads the unique UID of the card.
3. Arduino Uno compares the UID with stored student IDs.
4. If the UID matches:
   - Student attendance is recorded.
   - Current date and time are fetched from the RTC module.
5. Attendance details are displayed on the Serial Monitor.
6. If the card is not registered, the system displays "Unknown Card".

---

# 🛠 Hardware Components Used

- Arduino Uno
- RFID RC522 Module
- DS3231 RTC Module
- RFID Tags/Cards
- Breadboard
- Jumper Wires
- USB Cable
- Laptop/PC

---

# 💻 Software and Technologies Used

## Software
- Arduino IDE

## Programming Language
- Embedded C/C++

## Communication Protocols
- SPI Communication
- I2C Communication

## Libraries Used
- MFRC522 Library
- RTClib by Adafruit
- SPI Library
- Wire Library

---

# ✨ Key Features

- RFID-based attendance system
- Real-time attendance logging
- Date and time tracking using RTC
- Fast student identification
- Automated attendance process
- Low-cost implementation
- Easy to use and maintain

---

# 🌟 Why This Project is Special

- Reduces manual attendance work
- Improves attendance accuracy
- Demonstrates real-time embedded system concepts
- Uses both SPI and I2C communication
- Suitable for educational institutions
- Beginner-friendly Arduino project

---

# 📍 Applications

- School Attendance System
- College Attendance System
- Office Attendance Monitoring
- Library Entry System
- Employee Access Control
- Smart Classroom Systems

---

# 📂 Repository Structure

```text
RFID-Attendance-System/
│
├── code/
│   └── RFID_Attendance_System.ino
│
├── images/
│   ├── circuit.jpg
│   ├── project_setup.jpg
│   └── output.jpg
│
├── README.md
│
└── libraries/
    └── required_libraries.txt
```

---

# 💻 Source Code

The complete Arduino source code is available inside the `code` folder.

Main File:

```text
code/RFID_Attendance_System.ino
```

---

# 🖼 Project Images

The following images are included in the `images` folder:

- RFID attendance system hardware setup
- RFID RC522 and DS3231 RTC connections
- RFID card scanning process
- Serial Monitor attendance output

Project images help in understanding the circuit connections and working process of the system.

---

# 📚 Learning Outcomes

Through this project, the following concepts were learned:

- Arduino Programming
- RFID Technology
- RTC Module Interfacing
- SPI Communication
- I2C Communication
- Serial Communication
- Hardware Interfacing
- Embedded System Design

---

# 🔧 Installation and Instructions

## Step 1: Install Arduino IDE
Download and install Arduino IDE on your system.

## Step 2: Install Required Libraries

Install:
- MFRC522 Library
- RTClib by Adafruit

## Step 3: Connect Components
Connect RFID RC522 and DS3231 RTC modules to Arduino Uno.

## Step 4: Upload Code
Upload the Arduino code using Arduino IDE.

## Step 5: Open Serial Monitor
Set baud rate to `9600`.

## Step 6: Scan RFID Cards
Scan RFID cards to record attendance.

---

# 🔌 Wiring Connections

## RFID RC522 to Arduino Uno

| RFID RC522 Pin | Arduino Uno Pin |
|----------------|------------------|
| SDA            | 10 |
| SCK            | 13 |
| MOSI           | 11 |
| MISO           | 12 |
| RST            | 9 |
| GND            | GND |
| 3.3V           | 3.3V |

---

## DS3231 RTC to Arduino Uno

| DS3231 RTC Pin | Arduino Uno Pin |
|----------------|------------------|
| VCC            | 5V |
| GND            | GND |
| SDA            | A4 |
| SCL            | A5 |

---

# 🛠 Troubleshooting

## RFID Module Not Working
- Check SPI connections properly.
- Ensure RFID is powered with 3.3V.
- Verify MFRC522 library installation.

## RTC Module Not Detected
- Check SDA and SCL connections.
- Verify RTClib installation.
- Ensure RTC battery is inserted correctly.

## Serial Monitor Not Showing Output
- Select correct COM port.
- Set baud rate to 9600.
- Re-upload the code.

---
# 🚀 Future Enhancements

- Add LCD display for live attendance status
- Store attendance in SD card
- Send attendance to cloud/database
- Add Wi-Fi module for online monitoring
- Export attendance to Excel or CSV
---

# 💬 Feedback

Suggestions and improvements are always welcome.

If you found this project useful, feel free to star the repository.

---

# 🏷 Tags

`Arduino` `RFID` `RC522` `DS3231` `Attendance-System` `Embedded-Systems` `IoT` `Arduino-Uno` `Mini-Project` `C++`

---

# 👨‍💻 Author

Hema Krishna

GitHub:
https://github.com/hema-krishna2007
