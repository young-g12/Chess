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
		} else if (strcmp( userInput, "d3") == 0 ||
		strcmp(userInput, "D3") == 0) {
			printf("Pawn to d3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7 ||
				i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 3) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
		}
		else if (strcmp( userInput, "d4") == 0 ||
		strcmp(userInput, "D4") == 0) {
			printf("Pawn to d4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7 ||
				i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 3) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
	else if (strcmp( userInput, "a3") == 0 ||
		strcmp(userInput, "A3") == 0) {
			printf("Pawn to a3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			|| i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3|| i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 0) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "a4") == 0 ||
		strcmp(userInput, "A4") == 0) {
			printf("Pawn to a4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			|| i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3|| i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 0) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "b3") == 0 ||
		strcmp(userInput, "B3") == 0) {
			printf("Pawn to b3\n");
			
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 2 || i == 6 && j == 3|| i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 1) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "b4") == 0 ||
		strcmp(userInput, "B4") == 0) {
			printf("Pawn to b4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 2 || i == 6 && j == 3|| i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 1) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "c3") == 0 ||
		strcmp(userInput, "C3") == 0) {
			printf("Pawn to c3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 3|| i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 2) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "c4") == 0 ||
		strcmp(userInput, "C4") == 0) {
			printf("Pawn to c4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 3|| i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 2) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "e3") == 0 ||
		strcmp(userInput, "E3") == 0) {
			printf("Pawn to e3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 4) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "e4") == 0 ||
		strcmp(userInput, "E4") == 0) {
			printf("Pawn to e4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 5 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 4) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "f3") == 0 ||
		strcmp(userInput, "F3") == 0) {
			printf("Pawn to f3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 5) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "f4") == 0 ||
		strcmp(userInput, "F4") == 0) {
			printf("Pawn to f4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 6 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 5) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "g3") == 0 ||
		strcmp(userInput, "G3") == 0) {
			printf("Pawn to g3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 6) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "g4") == 0 ||
		strcmp(userInput, "G4") == 0) {
			printf("Pawn to g4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 7) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 6) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "h3") == 0 ||
		strcmp(userInput, "H3") == 0) {
			printf("Pawn to h3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 5 && j == 7) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
}
else if (strcmp( userInput, "h4") == 0 ||
		strcmp(userInput, "H4") == 0) {
			printf("Pawn to h4\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 1 && j == 0 || i ==  1 && j == 1 || i == 1 && j == 2 || i == 1 && j ==3 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 || i == 1 && j == 7
			||i == 6 && j == 0 || i == 6 && j == 1 || i == 6 && j == 2 || i == 6 && j == 3 || i == 6 && j == 4 || i == 6 && j == 5 || i == 6 && j == 6) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 7 && j == 6) {
				printf(" k ");
			} else if (i == 0 && j == 2 || i == 0 && j == 5 || i == 7 && j == 2 || i == 7 && j == 5) {
				printf(" b ");
			} else if (i == 0 && j == 3 || i == 7 && j == 4) {
				printf(" Q ");
			} else if (i == 0 && j == 4 || i == 7 && j == 3) {
				printf(" K ");
			} else if (i == 4 && j == 7) {
				printf(" p ");
			}
			else {
				printf(" . ");
			}
		}
		printf("\n");
	}
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
		} else if (strcmp(userInput, "f3") == 0 || 
		strcmp(userInput, "F3") == 0) {
			printf("Knight to F3\n");
			printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 6 || i == 1) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 5 && j == 5) {
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
		} else if (strcmp(userInput, "h3") == 0 ||
	 strcmp(userInput, "H3") == 0) {
		printf("knight to H3\n");
		printf("  a  b  c  d  e  f  g  h\n");
	for (int i = 0; i < 8; i++) {
		printf("%d", 8 - i);
		for (int j = 0; j < 8; j++) {
			if (i == 6 || i == 1) {
				printf(" p ");
			} else if (i == 0 && j == 0 || i == 0 && j == 7 || i == 7 && j == 0 || i == 7 && j == 7) {
				printf(" r "); 
			} else if (i == 0 && j == 1|| i == 0 && j == 6 || i == 7 && j == 1 || i == 5 && j == 7) {
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
