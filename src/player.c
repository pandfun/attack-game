#include "game.h"

int options(int* my_health, int* enemy_health)
{
	int ch, rc;

	printf("(1. Attack) (2. Heal)\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);

	if (ch == 1) {
		rc = attack(enemy_health);
		
	} else if (ch == 2) {
		heal(my_health);
		return 0;

	} else {
		printf("Invalid Choice!\n");
		exit(1);
	}

	return rc;
}

int attack(int* health)
{
	int random_val = get_random();
	*health -= random_val;

	if (*health < 1) {
		return -1;
	}

	return 0;
}

void heal(int* health)
{
	int random_val = get_random();
	*health += random_val;

	if (*health > 100)
		*health = 100;

	return;
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
