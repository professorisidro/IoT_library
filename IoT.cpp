#include "Arduino.h"
#include "Servo.h"
#include "IoT.h"


void defineRele(int pin){
  pinMode(pin, OUTPUT);
}

void ligaRele(int pin){
  digitalWrite(pin, HIGH);
}

void desligaRele(int pin){
  digitalWrite(pin,LOW);
}

void    defineSensor(int trig, int echo){
   pinMode(trig, OUTPUT);
   pinMode(echo, INPUT);
}
int     calculaDistanciaSensor(int trig, int echo){
   int   distancia;
   long  duracao;
  
   digitalWrite(trig, LOW);
   delayMicroseconds(2);
   digitalWrite(trig, HIGH);
   delayMicroseconds(10);
   digitalWrite(trig, LOW);
  
   duracao = pulseIn(echo, HIGH);
   // Calculating the distance
   distancia= (int)(duracao*0.034/2);
   return distancia;
}

void defineLed(int led){
  pinMode(led, OUTPUT);
}

void acendeLed(int pin){
  digitalWrite(pin, HIGH);
}

void apagaLed(int pin){
  digitalWrite(pin, LOW);
}

void brilhaLed(int pin, int brilho){
  analogWrite(pin, brilho);
}

void espera(long time){
  delay(time);
}

void botao(int pin){
  pinMode(pin, INPUT_PULLUP);
}

uint8_t verificaBotao(int pin){
  return digitalRead(pin);
}

int botaoLigado(int pin){
  return (digitalRead(pin) == LOW);
}

int botaoDesligado(int pin){
  return (digitalRead(pin) == HIGH);
}

// funcoes de Motor AC
void    defineMotorAC(int pin1, int pin2){
   pinMode(pin1, OUTPUT);
   pinMode(pin2, OUTPUT);
}
void    giraMotorAC(int pin1, int pin2){
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
}
void    inverteGiroMotorAC(int pin1, int pin2){
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,HIGH);
}
void    paraGiroMotorAC(int pin1, int pin2){
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
}

uint8_t Motor::conectar(int pin){
  Servo::attach(pin);
}

void Motor::girar(int graus){
  Servo::write(graus);
}
