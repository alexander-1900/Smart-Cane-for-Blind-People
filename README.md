# 🦯 Smart Cane for Blind People (ESP32 Ultrasonic Obstacle Detector)

<div align="center">

![ESP32](https://img.shields.io/badge/ESP32-WiFi%2BBluetooth-00979D?style=for-the-badge&logo=esp32)
![Ultrasonic](https://img.shields.io/badge/Sensor-HC--SR04-FF6B6B?style=for-the-badge)
![Buzzer](https://img.shields.io/badge/Output-Active%20Buzzer-4ECDC4?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**An affordable assistive technology device that helps blind and visually impaired people detect obstacles using ultrasonic sensor and audio feedback**

[![Stars](https://img.shields.io/github/stars/yourusername/smart-cane-blind-people?style=social)](https://github.com/yourusername/smart-cane-blind-people/stargazers)
[![Issues](https://img.shields.io/github/issues/yourusername/smart-cane-blind-people?style=social)](https://github.com/yourusername/smart-cane-blind-people/issues)
[![Made for Good](https://img.shields.io/badge/Made%20for-Goodness%20❤️-blue?style=social)](https://github.com/yourusername/smart-cane-blind-people)

</div>

---

## 📖 Table of Contents

- [Overview](#-overview)
- [Problem Statement](#-problem-statement)
- [Solution](#-solution)
- [How It Works](#-how-it-works)
- [Components Needed](#-components-needed)
- [Assembly Guide](#-assembly-guide)
- [Circuit Diagram](#-circuit-diagram)
- [Installation](#-installation)
- [Usage Instructions](#-usage-instructions)
- [Code Explanation](#-code-explanation)
- [Features](#-features)
- [Future Enhancements](#-future-enhancements)
- [Cost Breakdown](#-cost-breakdown)
- [Impact](#-impact)
- [Screenshots](#-screenshots)
- [Resources](#-resources)
- [License](#-license)
- [Contact](#-contact)

---

## 🎯 Overview

This project creates an **affordable smart cane attachment** for blind and visually impaired people using **ESP32**, **HC-SR04 ultrasonic sensor**, and a **buzzer**. When the user approaches an obstacle within 1 meter, the buzzer emits audio feedback that increases in frequency as they get closer.

**Key Features:**
- 🔊 **Proportional Audio Feedback**: Buzzer beep frequency increases as distance decreases
- 📏 **1 Meter Detection Range**: Detects obstacles from 0-100cm
- 📡 **ESP32 Microcontroller**: WiFi/Bluetooth enabled for future enhancements
- 🔋 **Low Power Consumption**: Suitable for battery-powered portable use
- 💰 **Ultra-Affordable**: Costs under $20 USD to build
- 🎯 **Real-Time Detection**: Instant obstacle alerts with minimal latency

> **Mission**: To provide affordable assistive technology that improves independence and safety for visually impaired individuals.

---

## 🚨 Problem Statement

**The Challenge:**
- Over **2.2 billion people worldwide** have vision impairment (WHO, 2023)
- Traditional white canes only detect ground-level obstacles
- Electronic travel aids (ETAs) are often **expensive** ($200-$500)
- Many blind people in developing countries **cannot afford** assistive technology
- Limited obstacle detection leads to **accidents and reduced independence**

**The Gap:**
Existing solutions are either too expensive, too complex, or don't provide intuitive feedback for everyday navigation.

---

## ✅ Solution

Our **Smart Cane** solves these problems by:

1. **Affordability**: Built with cheap, widely available components (~$15-20)
2. **Intuitive Feedback**: Buzzer beeps faster as you get closer to objects
3. **Easy Integration**: Attaches to any standard white cane
4. **Scalable**: ESP32 enables future WiFi/Bluetooth features
5. **Open-Source**: Anyone can build, modify, and distribute freely

### How It Helps Blind People

| Situation | Without Smart Cane | With Smart Cane |
|-----------|-------------------|-----------------|
| Walking toward a wall | May collide unexpectedly | Buzzer alerts 1m away |
| Navigating crowded streets | Hard to detect people/objects | Detects obstacles at chest level |
| Finding doorways | May miss open doors | Detects door frame |
| Stairs/escalators | Ground detection only | Detects railings & obstacles |
| Outdoor navigation | Limited range | 1 meter warning distance |

---

## ⚙️ How It Works

### System Architecture
