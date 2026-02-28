Here is your README filled for your project 👇
(You can copy-paste directly into GitHub)

---

<p align="center">
  <img src="./img.png" alt="Project Banner" width="100%">
</p>

#  IoT-Based Seizure Detection & Alert System 

## Basic Details

### Team Name:

SHEild

### Team Members

* Member 1: Joslin Elizabeth George - MACE
* Member 2: Meritta Elizabeth S - MACE

### Project Description

The current project proposes an IoT-based detection and alarm system for seizures. This IoT-based system aims to immediately respond and assist people prone to epileptic seizures. The proposed system includes an ESP8266 NodeMCU microcontroller that operates in conjunction with an MPU6050 accelerometer and gyroscope. These sensors enable the proposed system to monitor all body movements in real time. The proposed IoT-based detection and alarm system for seizures recognize sudden, extreme, and unusual movements in the body. These movements are usually related to seizures.At the same time, the ESP8266 uses its in-built Wi-Fi capability to communicate with the Blynk cloud IoT platform and send an emergency notification to a caregiver’s smartphone. 

### The Problem Statement

Seizures resulting from fever or temporary conditions are usually sporadic. Nevertheless, recurring unprovoked seizures may result in a neurological disorder known as epilepsy, which is a condition requiring long-term medical treatment. These types of recurring unexplained seizures are a cause for concern since the affected people may be alone and unsupervised when the condition strikes. As a result, the condition may not receive the required medical documentation. The occurrence of such unexplained seizures may also pose a challenge in the diagnosis and treatment of the condition since the data required may not be available. Therefore, a system is required that is able to detect the possibility of such a condition occurring and alert the relevant personnel accordingly.
### The Solution

The proposed system has the capability to detect and monitor recurring seizures, especially after an untriggered initial seizure that could be indicative of the start of epilepsy. The MPU6050 accelerometer-gyroscope sensor detects irregular movements of the body that are indicative of a person having a seizure. To further ensure that irregular movements are indicative of a seizure, simulated heart rates and oxygen saturation levels are used. These vital signs are typically elevated and decreased, respectively, during a seizure. Therefore, when irregular movements are detected with critical vital signs, an immediate alert is sent using the Blynk IoT platform. The proposed system is thus useful for improving safety, especially for children without constant adult supervision.

## Technical Details

### Technologies/Components Used

**For Software:**

* Languages used: C++ (Arduino)
* Frameworks used: Arduino Framework
* Libraries used: Blynk Library, ESP8266 Library, MPU6050 Library
* Tools used: Arduino IDE, Blynk IoT Cloud

**For Hardware:**

* Main components: ESP8266 NodeMCU, MPU6050 sensor, Buzzer (CC1212AN), LED
* Specifications: Wi-Fi enabled microcontroller, 3-axis accelerometer & gyroscope
* Tools required: Breadboard, jumper wires, USB cable, resistor


## Features

* Real-time motion-based seizure detection
* Instant smartphone alerts via Blynk IoT
* Visual alarm (LED + buzzer)
* Simulated heart rate and SpO₂ monitoring
* Low-cost and portable design


## Implementation

### For Hardware:

#### Components Required

* ESP8266 NodeMCU
* MPU6050 Module
* Active Buzzer (CC1212AN)
* LED with 220Ω resistor
* Breadboard and jumper wires

#### Circuit Setup

* Connect MPU6050 to ESP8266 using I2C (SDA → D2, SCL → D1)
* Connect LED to digital pin D5 via resistor
* Connect buzzer to digital pin D6
* Provide power via USB


## Project Documentation

### For Hardware:

#### Schematic & Circuit

<img width="1422" height="1118" alt="image" src="https://github.com/user-attachments/assets/2ec1e102-4fc5-41c9-93a2-2a8a585bd24d" />
<img width="1044" height="438" alt="image" src="https://github.com/user-attachments/assets/3d78c8d2-4104-4370-b757-1eef4e03b9e9" />



![Schematic diagram](https://github.com/user-attachments/assets/f312da68-43cb-483e-bd6b-9b7b4d00ce0a)



#### Build Photos


![Team photo](https://github.com/user-attachments/assets/8ede8c37-c68b-401c-9604-dc8faebdd8dd)



![Build](https://github.com/user-attachments/assets/80c41a3b-b338-4c2a-ba43-d01bc7862d3a)



![product ](https://github.com/user-attachments/assets/3dc8c039-a5dd-4e25-bd6a-48cf5ffc879d)



## Additional Documentation

### Bill of Materials (BOM)

| Component       | Quantity | Specifications       | Price |
| --------------- | -------- | -------------------- | ----- |
| ESP8266 NodeMCU | 1        | Wi-Fi MCU            | ₹250  |
| MPU6050         | 1        | Accelerometer + Gyro | ₹120  |
| Buzzer          | 1        | Active type          | ₹30   |
| LED             | 1        | 5mm                  | ₹5    |
| Resistor        | 1        | 220Ω                 | ₹1    |
| Breadboard      | 1        | 830 points           | ₹100  |
| Jumper Wires    | 1 set    | Male-Male            | ₹50   |

**Total Estimated Cost:** ₹556 (approx.)

---

## Project Demo

### Video

https://github.com/user-attachments/assets/3b5c7138-5a13-43fc-afef-4426a8995c78

## AI Tools Used (Optional)

**Tool Used:** ChatGPT

**Purpose:**

* Code assistance
* Documentation writing
* Debugging support

**Human Contributions:**

* Circuit design
* System integration
* Testing and implementation


## Team Contributions

* Joslin Elizabeth George: Hardware design, coding, integration
* Meritta Elizabeth S: Documentation, testing, Blynk dashboard setup

---

## License

This project is intended for educational and research purposes.

---

Made with ❤️ at TinkerHub

---


