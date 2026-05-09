# Robo Race Car

This is a fast (and sometimes unpredictable) robo race car built using ESP32 and motor drivers.  
The goal of this project is simple — **make a remote controlled car that actually feels responsive and fun to drive**.


---

## Idea Behind the Project

I wanted to build something more practical than just blinking LEDs.  
So this robo race car is basically:

- Controlled wirelessly (RC / signals)
- Uses motor drivers to control speed + direction
- Designed to be fast enough for racing 

---

## Components Used

- ESP32 (main brain)
- L298N Motor Driver
- 2 DC Motors (for wheels)
- Chassis (basic robot car frame)
- Battery pack (depends what you have)
- RC Receiver / PWM input
- Jumper wires (lots of them… trust me)

---

## Pin Configuration

```cpp
// Receiver Pins
#define CH1 34
#define CH2 35

// Motor Driver 1
#define ENA 25
#define IN1 26
#define IN2 27

// Motor Driver 2
#define ENB 14
#define IN3 12
#define IN4 13
```

---
## Photos
## CIRCUIT

<img width="1512" height="982" alt="Screenshot 2026-05-04 at 4 19 26 PM" src="https://github.com/user-attachments/assets/72a2064e-327e-4b4a-98a0-4babf2c3e86b" />
## CAD

Reference Material -- https://www.spu.edu.sy/downloads/files/1495967538_1111.pdf

<img width="1512" height="982" alt="Screenshot 2026-05-04 at 4 19 19 PM" src="https://github.com/user-attachments/assets/c3fc7b64-14cf-44f8-8c7b-2578c11d6437" />
