#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int userColor;
	int r = rand() % 2;
	

	printf("--Welcome to Chess--\n");
	printf("Choose either 1 or 0:\n");
	
	scanf("%d", &userColor);
	printf("Random number: %d\n", r);

	if (userColor == r) {
		printf("You have selected %d. You go first.\n", userColor);
	} else if (userColor != r) {
		printf("Computer goes first");
	} else {
		printf("Incorrect input. Try again.");
	}
	
	// printf("  a  b  c  d  e  f  g  h\n");
	// for (int i = 0; i < 8; i++) {
	// 	printf("%d", 8 - i);
	// 	for (int j = 0; j < 8; j++) {
	// 		printf(" * ");
	// 	}
	// 	printf("\n");
	// }
	
	// // move a piece 
	// printf("  a  b  c  d  e  f  g  h\n");
	// for (int i = 0; i < 8; i++) {
	// 	printf("%d", 8 - i);
	// 	for (int j = 0; j < 8; j++) {
	// 		printf(" * ");
	// 	}
	// 	printf("\n");
	// }

	// show updated board

	return 0;
}
