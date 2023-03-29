#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

#define LOW 0
#define HIGH 30

int get_random(void)
{
	int num;

	num = (rand() % (HIGH - LOW + 1)) + LOW;
	
	return num;
}