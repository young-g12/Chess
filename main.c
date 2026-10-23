#include <stdio.h>

int main() {

	int userColor;

	printf("Welcome to Chess\n");
	printf("Select color:\n");

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

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			printf("%d\n", j);
		}
		printf(" ");
	}
	
	return 0;
}
