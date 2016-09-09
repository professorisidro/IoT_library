#ifndef IoT_h
#define IoT_h

	#include "Arduino.h"
	#include "Servo.h"
	#define ENTRADA INPUT
	#define SAIDA   OUTPUT

	void acendeLed(int pin);
	void apagaLed(int pin);
	void espera(long mili);
	void defineLed(int pin);

    class Motor : Servo{
       public:
	      uint8_t conectar(int pin);
	      void girar(int angulo);
    };
    
#endif