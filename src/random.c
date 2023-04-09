#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

#define LOW 0
#define HIGH 15

int get_random(void)
{
	srand(time(0));
	int num1;
	int num2;
	
	num1 = rand();
	num1 %= (HIGH - LOW + 1) + LOW;

	num2 = rand();
	num2 %= (HIGH - LOW + 1) + LOW;


	return num1 + num2;
}
