


#ifndef IoT_h
#define IoT_h

	#include "Arduino.h"
	#include "Servo.h"
	#define ENTRADA   INPUT
	#define SAIDA     OUTPUT
    #define LIGADO    0
    #define DESLIGADO 1
    #define se        if 
    #define senao     else
    #define repita(x) for (int _Iot_counter=0; _Iot_counter < x ; _Iot_counter++)
    #define Numero    int
    

	void    acendeLed(int pin);
	void    apagaLed(int pin);
	void    espera(long mili);
	void    defineLed(int pin);
	void    brilhaLed(int pin, int brilho);
	void    botao(int pin);
	uint8_t verificaBotao(int pin);
	int     botaoLigado(int pin);
	int     botaoDesligado(int pin);

    class Motor : Servo{
       public:
	      uint8_t conectar(int pin);
	      void girar(int angulo);
    };
    
#endif