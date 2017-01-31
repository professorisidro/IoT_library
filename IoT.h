#ifndef IoT_h
#define IoT_h

#include "Arduino.h"
#include "Servo.h"


// algumas constantes
#define ENTRADA   INPUT
#define SAIDA     OUTPUT
#define LIGADO    0
#define DESLIGADO 1


// redefinicoes sintaticas
#define se             if
#define senao          else
#define repita(x)      for (int _Iot_counter=0; _Iot_counter < x ; _Iot_counter++)
#define Numero         int
#define NumeroDecimal  float

// operacoes Logicas
#define  E   &&
#define  OU  ||
#define  NAO  !

// funcoes de LED
void    defineLed(int pin);
void    acendeLed(int pin);
void    apagaLed(int pin);
void    brilhaLed(int pin, int brilho);
void    espera(long mili);

// funcoes do sensor HC-SR04
void    defineSensor(int trig, int echo);
int     calculaDistanciaSensor(int trig, int echo);

// funcoes de Rele
void    defineRele(int pin);
void    ligaRele(int pin);
void    desligaRele(int pin);

// funcoes de Botao (pushbutton)
void    botao(int pin);
uint8_t verificaBotao(int pin);
int     botaoLigado(int pin);
int     botaoDesligado(int pin);

// funcoes de Motor AC
void    defineMotorAC(int pin1, int pin2);
void    giraMotorAC(int pin1, int pin2);
void    inverteGiroMotorAC(int pin1, int pin2);
void    paraGiroMotorAC(int pin1, int pin2);


// funcoes de Servomotor
class Motor : Servo{
public:
  uint8_t conectar(int pin);
  void girar(int angulo);
};

#endif
