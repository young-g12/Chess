#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int userColor;
	int r = rand() % 2;
	

	printf("Welcome to Chess\n");
	printf("Select color:\n");
	
	printf("%d\n", r);


	printf("1. Black\n");
	printf("2. White\n");
	scanf("%d", &userColor);

	if (userColor == 1) {
		printf("You have selected black.\n");
	} else if (userColor == 2) {
		printf("You have selected white.\n");
	} else {
		printf("Wrong input, select correct color\n");

	}

	printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			printf(" * ");
		}
		printf("\n");
	}
	
	return 0;
}
