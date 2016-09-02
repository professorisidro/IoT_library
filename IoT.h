#ifndef IoT_h
#define IoT_h

	#include "Arduino.h"
	#define ENTRADA INPUT
	#define SAIDA   OUTPUT
	#define Motor   Servo


	void acendeLed(int pin);
	void apagaLed(int pin);
	void espera(long mili);
	void defineLed(int pin);

#endif