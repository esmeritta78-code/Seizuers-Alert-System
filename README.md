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

The current project proposes an IoT-based detection and alarm system for seizures. This IoT-based system aims to immediately respond and assist people prone to epileptic seizures. The proposed system includes an ESP8266 NodeMCU microcontroller that operates in conjunction with an MPU6050 accelerometer and gyroscope. These sensors enable the proposed system to monitor all body movements in real time. The proposed IoT-based detection and alarm system for seizures recognize sudden, extreme, and unusual movements in the body. These movements are usually related to seizures.At the same time, the ESP8266 uses its in-built Wi-Fi capability to communicate with the Blynk cloud IoT platform and send an emergency notification to a caregiver’s smartphone. This is useful in case the patient is alone.

### The Problem Statement

It is common knowledge that seizures resulting from fever or other temporary conditions are frequently isolated incidents. However, when seizures occur frequently without an identifiable reason, it may be an indication of the development of epilepsy, which is a neurologic disorder that demands long-term medical attention and medication. Such occurrences of epilepsy are of great concern because children may or may not be under the direct supervision of their parents or guardians.
In cases where children are experiencing seizure incidents when they are alone, it is possible that they may not be receiving timely medical attention or proper medical documentation of their condition. It is crucial to monitor how frequently children are experiencing seizures, when they are experiencing them, and under what conditions. Without reliable data, it may be difficult for doctors to administer effective medication or assess how well or poorly the condition is progressing.
Therefore, there is a need to develop a system that is capable of detecting possible epileptic seizures and documenting event details, which will be crucial in alerting caregivers of the condition of the children.

### The Solution

Our proposed solution is based on the detection and monitoring of recurring seizures, especially following an initial untriggered seizure, which may be an indication of the beginning of epilepsy. Therefore, once a seizure is detected without a trigger, subsequent recurring seizures are closely monitored in order to ensure appropriate and timely medical interventions.
The MPU6050 accelerometer and gyroscope sensor are used in the proposed system for the detection of unusual body movements related to a seizure. In addition, simulated data related to heart rate and oxygen saturation level (SpO₂), which are characteristic features of a seizure, are also included in the proposed system in order to improve the reliability of the seizure detection mechanism. Clinical observations indicate that during a seizure, the heart rate is increased significantly, and the oxygen saturation level is reduced below normal. These values are simulated using dummy values related to the pulse sensor, such as the MAX30102.
The proposed system is able to detect a seizure once unusual body movements are detected along with a critical heart rate and oxygen saturation level. As a result, an immediate alert is sent through the Blynk IoT platform in order to ensure appropriate care.The solution seeks to create a low-cost, portable, and real-time seizure alert system that will improve the safety of susceptible individuals, especially children who may not always be under direct supervision. This will improve the management of epilepsy by facilitating early detection, timely alert, and continuous monitoring of recurrent events.


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

![Circuit](Add your circuit diagram here)
*Circuit showing connections between ESP8266, MPU6050, LED, and buzzer*

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



## AI Tools Used (Optional)

https://github.com/user-attachments/assets/3b5c7138-5a13-43fc-afef-4426a8995c78



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

* [Your Name]: Hardware design, coding, integration
* [Member Name]: Documentation, testing, Blynk dashboard setup

---

## License

This project is intended for educational and research purposes.

---

Made with ❤️ at TinkerHub

---


