#include "game.h"
#include <stdio.h>

void options(int* my_health, int* enemy_health)
{
	int ch;

	printf("(1. Attack) (2. Heal)\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);

	if (ch == 1) {
		attack(enemy_health);
	} else if (ch == 2) {
		heal(my_health);
	} else {
		printf("Invalid Choice!\n");
		exit(1);
	}
}

void display_health(int *health1, int *health2)
{
	int i = 0;

	printf("\n");
	if (*health1 < 0) {
		printf("Player 1 :(\n");
	} else {
		printf("Player 1: (%d) ", *health1);
		for ( ; i < *health1; ++i)
			printf("❚");
		printf("\n\n");
	}

	if (*health2 < 0) {
		printf("Player 2 :(\n");
	} else {
		printf("Player 2: (%d) ", *health2);
		for (i = 0; i < *health2; ++i)
			printf("❚");
		printf("\n\n");
	}

	return;
}

void attack(int* health)
{
	int random_val = get_random();
	*health -= random_val;

	if (*health < 1) {
		printf("Game over...\n");
		exit(1);
	}

	return;
}

void heal(int* health)
{
	int random_val = get_random();
	while (random_val > (100 - *health))
		random_val = get_random();
	
	*health += random_val;

	return;
}