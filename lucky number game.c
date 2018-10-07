/* This is a lucky number game. Player will have opportunity to enter 3 guess number and if the guess made by player match against the set lucky number then player win else they lose.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber = 5;
    int playerNumber;
    int guessLimit = 3;
    int guessCount = 0;
    int noMoreGuess = 0;

    while (playerNumber != luckyNumber && noMoreGuess == 0) {
        if (guessCount < guessLimit) {
            printf("Please guess today's lucky number : \n");
            scanf("%d", &playerNumber);
            guessCount++;
        } else {
            noMoreGuess = 1;
        }

        } if (noMoreGuess == 1){
            printf("Sorry you've run out of guess limit. You lost \n");
        } else {
            printf("Congratulation, You've Won. Today's lucky number is %d. \n", luckyNumber);
    }

    return 0;
}




