#include <stdio.h>

int main()
{
    int winningNumber = 7;
    int answer;
    int attempts = 5;

    printf("This is a guessing game! I have chosen a number you'll have to guess, you only have 5 attempts to guess my number correctly! Good Luck :)\n");

    for(; attempts > 0; attempts--)
    {
        printf("You have %d tries left!\n", attempts);
        printf("Enter your guess: \n");
        scanf("%d", &answer);

        if (answer > 7)
        {
            printf("Too high!\n");
        }
        else if(answer <7)
        {
            printf("Too low \n");
        }
        else if(answer == winningNumber)
        {
            printf("You won :)\n");
            break;
        }
    }
    printf("You lost :( The correct number was: %d\n", winningNumber);
}