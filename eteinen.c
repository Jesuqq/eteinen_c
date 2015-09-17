/*
 *Simple program to read signal from motion tracking module
 *and to turn on relay controlling a light at defined raspberry pins
 * */

// we are using wiringPi library
#include <wiringPi.h>

//defining pins used for motion sensor and relay
#define MOTION = 13;
#define RELAY = 11;


int main (void)	{
	wiringPiSetup();
	pinMode(13, OUTPUT);
	
}
