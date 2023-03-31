#include <stdio.h>
#include "game.h"

int p1_health = 100;
int p2_health = 100;

int main(void)
{
	int rc;
	int *h1 = &p1_health;
	int *h2 = &p2_health;

	while (1) {
		system("clear");
		display_txt(3);
		printf("\n\n\n");
		display_health(h1, h2);

		printf("\n\n\n");
		display_txt(1);
		printf("\n\n");
		rc = options(h1, h2);
		if (rc < 0) {
			printf("\n\nPLAYER 1 WINS!!!\n\n");
			display_txt(4);
			return 0;
		}

		system("clear");
		display_txt(3);
		printf("\n\n\n");
		display_health(h1, h2);

		printf("\n\n\n");
		display_txt(2);
		printf("\n\n");
		rc = options(h2, h1);
		if (rc < 0) {
			printf("\n\nPLAYER 2 WINS!!!\n\n");
			display_txt(4);
			return 0;
		}
	}

	return 0;
}