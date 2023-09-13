// C program for the Scissor,Paper,Rock !!
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int game(char you, char computer)   // Function to implement the game
{
	// If both the user and computer has choose the same thing
	if (you == computer)
		return -1;

	// If user's choice is Rock and computer's choice is Paper
	if (you == 'R' && computer == 'P')
		return 0;

	// If user's choice is Paper and computer's choice is Rock
	else if (you == 'P' && computer == 'R')
		return 1;

	// If user's choice is Rock and computer's choice is Scissor
	if (you == 'R' && computer == 'S')
		return 1;

	// If user's choice is Scissor and computer's choice is Rock
	else if (you == 'S' && computer == 'R')
		return 0;

	// If user's choice is Paper and computer's choice is Scissor
	if (you == 'P' && computer == 'S')
		return 0;

	// If user's choice is Scissor and computer's choice is Paper
	else if (you == 'S' && computer == 'P')
		return 1;
}

// Driver Code
int main()
{
	// Stores the random number
	int n;

	char you, computer, result;

	// Chooses the random number every time
	srand(time(NULL));

	// Make the random number less than 100, divided it by 100
	n = rand() % 100;

	// Using simple probability 100 is roughly divided among stone, paper, and scissor
	if (n <= 33)

		// s is denoting Stone
		computer = 'R';

	else if (n >= 33 && n <= 66)

		// p is denoting Paper
		computer = 'P';

	// z is denoting Scissor
	else
		computer = 'S';
	
	printf("\n\n\n\n\t\t\tX---------------------- SCISSOR | PAPER | ROCK ----------------------X");

	printf("\n\n\n\n\t\t\t\t --> ROCK = R \n\t\t\t\t --> SCISSOR = S \n\t\t\t\t --> PAPER = P \n\t\t\t\t\t\t\t");

	printf("\n\n\t\t\t\t -->  : ");

	// input from the user
	scanf("%c", &you);

	// Function Call to play the game
	result = game(you, computer);
	

	if (result == -1) {
		printf("\n\n\t\t\t\tGame Draw!\n");
	}
	else if (result == 1) {
		printf("\n\n\t\t\t\t ----- CONGRATULATION! You have won the game! -----\n");
	}
	else {
		printf("\n\n\t\t\t\t ----- Oh!!!! You have lost the game!----- \n\t\t\t\t ---------'BETTER LUCK NEXT TIME'---------\n ");
	}
		printf("\t\t\t\t YOU : %c and COMPUTER : %c\n",you, computer);

	return 0;
}
