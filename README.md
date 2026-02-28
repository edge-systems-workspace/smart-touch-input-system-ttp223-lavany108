[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/72Pl6YlH)
# 👆 Embedded Touch Detection System – TTP223

![License](https://img.shields.io/badge/license-MIT-blue)
![Platform](https://img.shields.io/badge/platform-Arduino-orange)
![Language](https://img.shields.io/badge/language-C++-blue)

An embedded capacitive touch detection system using the TTP223 touch sensor module for digital input interfacing and structured event-based control logic.

---

## 📑 Table of Contents

- Project Overview
- Hardware Requirements
- Software Requirements
- Wiring Connections
- Working Principle
- Code Structure
- Documentation Requirement
- Submission Requirements
- Future Improvements
- License

---

## 🚀 Project Overview

This project demonstrates digital touch detection using the TTP223 capacitive touch sensor and Arduino (Uno R4 recommended).

The system:

- Detects touch events
- Reads digital HIGH/LOW signal
- Implements event-based logic
- Displays structured serial output
- Follows Doxygen documentation standards
- Enforces Git-based development discipline

This project introduces:

- Digital sensor interfacing
- Event-driven programming
- Input signal handling
- Embedded system structuring

---

## 🔧 Hardware Requirements

- Arduino Uno R4
- TTP223 Capacitive Touch Sensor Module
- Breadboard
- Jumper wires
- USB cable

---

## 💻 Software Requirements

- Arduino IDE
- Git
- GitHub Account

---

## 🔌 Wiring Connections

| TTP223 Pin | Arduino |
|------------|----------|
| VCC        | 5V       |
| GND        | GND      |
| OUT        | Digital Pin 2 |

---

## ⚙ Working Principle

- TTP223 uses capacitive sensing.
- When touched, the output pin becomes HIGH.
- When released, output becomes LOW.
- Arduino reads digital state and processes logic.

---

## 🧠 Code Structure

The system:

1. Initializes Serial communication
2. Configures digital input pin
3. Reads touch state
4. Detects touch event
5. Displays structured output

---

## 📚 Documentation Requirement

Students must include:

- File-level Doxygen documentation block
- Function documentation for:
  - `setup()`
  - `loop()`
- Required tags:
  - `@file`
  - `@brief`
  - `@author`
  - `@date`

---

## 📊 Submission Requirements

- Minimum 5 meaningful commits
- Proper commit message format
- All TODO tasks completed
- Doxygen documentation included
- Code must compile successfully

---

## 🔮 Future Improvements

- Toggle LED on touch
- Implement touch counter
- Add debounce logic
- Multi-touch module expansion
- IoT-based touch control

---

## 📜 License

This project is licensed under the MIT License.
