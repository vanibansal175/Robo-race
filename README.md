# Robo Race Car

This is a fast robo race car built using ESP32 and motor drivers.  
The goal of this project is simple — **make a remote controlled car that actually feels responsive and fun to drive**.


---

## Idea Behind the Project

I wanted to build something more practical .  
So this robo race car is basically:

- Controlled wirelessly (RC / signals)
- Uses motor drivers to control speed + direction
- Designed to be fast enough for racing 

---

## Components Used

| Name | Purpose | Quantity | Total Cost (USD) | Link | Distributor |
|------|----------|----------|------------------|------|-------------|
| ESP32 | Main Controller | 1 | 5.00 | https://robu.in/product/esp32-development-board/ | Robu |
| L298N | Motor Driver | 1 | 3.50 | https://robu.in/product/l298n-dual-h-bridge-motor-driver/ | Robu |
| Johnson Motor | Wheel Movement | 4 | 26.00 | https://robu.in/product/dc-geared-motor/ | Robu |
| Robot Chassis | Car Base | 1 | 8.00 | https://robu.in/product/robot-chassis-kit/ | Robu |
| RC Receiver | Receive Controller Signals | 1 | 10.00 | https://robu.in/product/fs-ia6b-receiver/ | Robu |
| RC Transmitter | Wireless Controller | 1 | 45.00 | https://robu.in/product/flysky-fs-i6-transmitter/ | Robu |
| Battery Pack | Power Supply | 1 | 22.00 | https://robu.in/product/18650-battery-holder/ | Robu |
| Jumper Wires | Connections | 1 | 1.00 | https://robu.in/product/male-to-female-jumper-wire-pack/ | Robu |
| Wheels | Movement | 4 | 4.00 | https://robu.in/product/robot-wheel/ | Robu |


## Note - I have all components except motor and battery . i have battery too but of very low quality 😭. So i am asking for grant because my batteries can't supply for continuous 5 mins to BO motor..

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


<img width="1512" height="982" alt="Screenshot 2026-05-04 at 4 19 19 PM" src="https://github.com/user-attachments/assets/c3fc7b64-14cf-44f8-8c7b-2578c11d6437" />
