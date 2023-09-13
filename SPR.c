#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer) {
    if (you == computer)
        return 0;

    if ((you == 'R' && computer == 'S') || (you == 'S' && computer == 'P') || (you == 'P' && computer == 'R'))
        return 1;

    return -1;
}

int main() {
    int n;
    char you, computer;
    int result;

    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
        computer = 'R';
    else if (n >= 33 && n < 66)
        computer = 'P';
    else
        computer = 'S';

    printf("\n\n\n\n\t\t\tX---------------------- SCISSOR | PAPER | ROCK ----------------------X");

    printf("\n\n\n\n\t\t\t\t --> ROCK = R \n\t\t\t\t --> SCISSOR = S \n\t\t\t\t --> PAPER = P \n\t\t\t\t\t\t\t");

    printf("\n\n\t\t\t\t --> PICK! Yours :");


    scanf(" %c", &you); 

    if (you != 'R' && you != 'P' && you != 'S') {
        printf("\n\n\t\t\t\t Invalid choice. Please choose R, P, or S.\n");
        return 1;
    }

    result = game(you, computer);
    printf("\n\n\t\t\t\t --> YOU : %c || COMPUTER : %c\n", you, computer);

    if (result == 0) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\n\n\t\t\t\t ----- CONGRATULATION! You have won the game! -----\n");
    } else {
        printf("\n\n\t\t\t\t ----- Oh!!!! You have lost the game!----- \n\t\t\t\t ---------'BETTER LUCK NEXT TIME'---------\n ");
    }

    return 0;
}

