#include <Arduino.h>

// Reciver Pins
#define CH1 34
#define CH2 35

//Motor Driver 1
#define ENA 25
#define IN1 26
#define IN2 27

//Motor Driver 2
#define ENB 14
#define IN3 12
#define IN4 13

int throttle;
int steering;

void setup() {

    Serial.begin(115200);

    pinMode(CH1, INPUT);
    pinMode(CH2, INPUT);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);

    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    ledcSetup(0, 1000, 8);
    ledAttachPin(ENA, 0);

    ledcSetup(1, 1000, 8);
    ledAttachPin(ENB, 1);

}

void loop() {
    throttle = pulseIn(CH2, HIGH);
    steering = pulseIn(CH1, HIGH);

    Serial.print("Throttle : ");
    Serial.print(throttle);

    Serial.print("Steering: ");
    Serial.println(steering);

    int speed = 180;

    if (throttle > 1450  && throttle < 1550) {
        stopCar();
    }

    else if (throttle > 1550){
        forward(speed);
    }

    else if (throttle < 1450) {
        backward(speed);
    }
    

    if (steering > 1600) {
        right();
    }
    else if (steering < 1400) {
        left();
    }


    delay(20);

    
}

void forward(int speed) {

    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    ledcWrite(0, speed);
    ledcWrite(1, speed);
}

void backward(int speed) {

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    ledcWrite(0, speed);
    ledcWrite(1, speed);
}

void stopCar() {

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3,LOW);
    digitalWrite(IN4, LOW);

    ledcWrite(0, 0);
    ledcWrite(1, 0);
}

void right(){

    ledcWrite(0, 120);
    ledcWrite(1, 220);

}

void left(){

    ledcWrite(0, 120);
    ledcWrite(1, 220);
}

