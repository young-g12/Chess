#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//function declaration 
void displayGameboard();
int eloRating();

int main() {

	srand(time(NULL));
	int userColor;
	int r = rand() % 2;
	char userInput[3];
	int pieceSelector;
	char pawn = 'p';
	char knight = 'k';
	char bishop = 'b';
	char rook = 'r';
	char king = 'k';
	char queen = 'q'; 
	

    while (r < 3) {
	printf("--Welcome to Chess--\n");
	printf("Choose either 1 or 0:\n");
	
	scanf("%d", &userColor);
	printf("Random number: %d\n", r);

	if (r == 0) {
		printf("You have selected %d. You go first.\n", userColor);
	} else if (r == 1) {
		printf("Player2 goes first.\n");
	} else {
		printf("Incorrect input. Try again.");
	}
}
}