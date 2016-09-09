#include "Arduino.h"
#include "Servo.h"
#include "IoT.h"

void defineLed(int led){
    pinMode(led, OUTPUT);
}

void acendeLed(int pin){
	digitalWrite(pin, HIGH);
}

void apagaLed(int pin){
	digitalWrite(pin, LOW);
}

void espera(long time){
	delay(time);
}

uint8_t Motor::conectar(int pin){
    Servo::attach(pin);
}
void Motor::girar(int graus){
    Servo::write(graus);
}

