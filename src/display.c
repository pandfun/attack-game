#include <stdio.h>
#include "game.h"

/*
	FLAGS	Content
	1		Player 1
	2		Player 2
	3		Welcome logo
	4		Game over

*/

void display_txt(int flag)
{
	FILE *fptr;

	switch (flag) {
		case 1: {
			fptr = fopen("./text_walls/player1.txt", "r");
			break;
		}
		case 2: {
			fptr = fopen("./text_walls/player2.txt", "r");
			break;
		}
		case 3: {
			fptr = fopen("./text_walls/logo.txt", "r");
			break;
		}
		case 4: {
			fptr = fopen("./text_walls/game_over.txt", "r");
			break;
		}
	}

	if (fptr == NULL) {
		perror("fopen");
		exit(1);
	}

	char ch;

	while ((ch = fgetc(fptr)) != EOF) {
		printf("%c", ch);
	}

	fclose(fptr);
	return;
}