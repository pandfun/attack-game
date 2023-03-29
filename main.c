#include <stdio.h>
#include "game.h"

int p1_health = 100;
int p2_health = 100;

int main(void)
{
	int *h1 = &p1_health;
	int *h2 = &p2_health;

	while (1) {
		system("clear");
		display_health(h1, h2);

		printf("\nPLAYER 1:\n");
		options(h1, h2);

		system("clear");
		display_health(h1, h2);

		printf("\nPLAYER 2:\n");
		options(h2, h1);
	}

	return 0;
}