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
	

	printf("--Welcome to Chess--\n");
	printf("Choose either 1 or 0:\n");
	
	scanf("%d", &userColor);
	printf("Random number: %d\n", r);

	if (userColor == r) {
		printf("You have selected %d. You go first.\n", userColor);
	} else if (userColor != r) {
		printf("Computer goes first\n");
	} else {
		printf("Incorrect input. Try again.");
	}
	
	printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 6 || i == 1) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 3) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 4) {
				printf(" K ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}

	
	//if statements for each possible move w/ error handling 

	printf("select which piece would like to move.\n");
	printf("1. Pawn\n");
	printf("2. Rook\n");
	printf("3. Knight\n");
	printf("4. Bishop\n");
	printf("5. Queen\n");
	printf("6. King\n");
	scanf("%d: \n", &pieceSelector);

	// pawn movement
	if (pieceSelector == 1) {
		printf("You've selected pawn\n");
		printf("\n");
		printf("Enter position: ");
		scanf("%s", userInput);

		if (strcmp(userInput, "a1") == 0 || 
			strcmp(userInput,"A1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "b1") == 0 || 
		strcmp(userInput, "B1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "c1") == 0 || 
		strcmp(userInput, "C1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "d1") == 0 || 
		strcmp(userInput, "D1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "e1") == 0 || 
		strcmp(userInput, "E1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "f1") == 0 || 
		strcmp(userInput, "F1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "g1") == 0 || 
		strcmp(userInput, "G1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "h1") == 0 || 
		strcmp(userInput, "H1") == 0) {
			printf("Cannot move there currently, select another position\n");
		} else if (strcmp(userInput, "a2") == 0 || 
			strcmp(userInput,"A2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "b2") == 0 || 
		strcmp(userInput, "B2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "c2") == 0 || 
		strcmp(userInput, "C2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "d2") == 0 || 
		strcmp(userInput, "D2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "e2") == 0 || 
		strcmp(userInput, "E2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "f2") == 0 || 
		strcmp(userInput, "F2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "g2") == 0 || 
		strcmp(userInput, "G2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "h2") == 0 || 
		strcmp(userInput, "H2") == 0) {
			printf("Cannot move there currently, select another position\n");
		} else if (strcmp( userInput, "")) {
			
		}
		
	} else if (pieceSelector == 2) {
		printf("You've selected Rook\n");
	} else if (pieceSelector == 3) {
		printf("You've selected Knight\n");

		printf("\n");
		printf("Enter position: ");
		scanf("%s", userInput);
		if (strcmp(userInput, "e2") == 0 || 
			strcmp(userInput,"E2") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "b1") == 0 || 
		strcmp(userInput, "B1") == 0) {
			printf("Cannot move there currently, select another position\n");
		}  else if (strcmp(userInput, "c1") == 0 || 
		strcmp(userInput, "C1") == 0) {
			printf("Cannot move there currently, select another position\n");
		} 
	} else if (pieceSelector == 4) {
		printf("You've selected Bishop\n");
	} else if (pieceSelector == 5) {
		printf("You've selected Queen\n");
	} else if (pieceSelector == 6) {
		printf("You've selected King\n");
	} else {
		printf("Invalid choice, please select again from  1 - 6.");
	}

	//knights
	

	//castle

	//bishops

	//king

	//queen

	

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
