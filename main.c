#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function declaration 
void displayGameboard();
int eloRating();

int main() {

	srand(time(NULL));
	int userColor;
	int r = rand() % 2;
	char userInput;
	

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
	
	printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			printf(" . ");
		}
		printf("\n");
	}

	printf("Enter move w/ coordinates: ");
	scanf("%c ", &userInput);
	
	//if statements for each possible move w/ error handling 

	//pawns

	//knights

	//castle

	//bishops

	//king

	//queen

	if (userInput == 'a1') {
		printf("Cannot move there currently");
	} else if (userInput == 'b1') {
		printf("Cannot move there currently");
	} else if (userInput == 'c1') {
		printf("Cannot move there currently");
	} else if (userInput == 'd1') {
		printf("Cannot move there currently");
	} else if (userInput == 'e1') {
		printf("Cannot move there currently");
	} else if (userInput == 'f1') {
		printf("Cannot move there currently");
	} else if (userInput == 'g1') {
		printf("Cannot move there currently");
	} else if (userInput == 'h1') {
		printf("Cannot move there currently");
	} else if (userInput == 'a2') {
		printf("Cannot move there currently");
	} else if (userInput == 'b2') {
		printf("Cannot move there currently");
	} else if (userInput == 'c2') {
		printf("Cannot move there currently");
	} else if (userInput == 'd2') {
		printf("Cannot move there currently");
	} else if (userInput == 'e2') {
		printf("Cannot move there currently");
	} else if (userInput == 'f2') {
		printf("Cannot move there currently");
	} else if (userInput == 'g2') {
		printf("Cannot move there currently");
	} else if (userInput == 'h2') {
		printf("Cannot move there currently");
	} else if (userInput == 'a3') {
		printf("Cannot move there currently");
	} else if (userInput == 'a4') {
		printf("Cannot move there currently");
	} else if (userInput == 'g1') {
		printf("Cannot move there currently");
	} else if (userInput == 'h1') {
		printf("Cannot move there currently");
	}










	// show updated board

	return 0;
}

// function defintion 
void displayGameboard() {
	printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			printf(" * ");
		}
		printf("\n");
	}
}

int eloRating() {

}
