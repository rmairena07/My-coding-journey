#include <stdio.h>

char board[10] = {'0', '1', '2', '3', '4', '5' , '6' , '7' ,'8' ,'9'};

void drawBoard()
{
    printf("\n");
    printf(" %c | %c | %c\n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n\n", board[7], board[8], board[9]);
}

int checkForWin()
{
    //rows
    if ((board[1] == board[2]) && (board[2] == board[3])) return 1;
    if ((board[4] == board[5]) && (board[5] == board[6])) return 1;
    if ((board[7] == board[8]) && (board[8] == board[9])) return 1;

    //columns
    if ((board[1] == board[4]) && (board[4] == board[7])) return 1;
    if ((board[2] == board[5]) && (board[5] == board[8])) return 1;
    if ((board[3] == board[6]) && (board[6] == board[9])) return 1;

    //diagonals
    if ((board[1] == board[5]) && (board[5] == board[9])) return 1;
    if ((board[3] == board[5]) && (board[5] == board[7])) return 1;

    //draw
    int i;
    for (i=1; i<=9; i++)
    {
        if (board[i] != 'X' && board[i] != 'O')
        {
            return 0;
        }
    }
    return -1;
}

int main() {
    int player = 1, choice, status;
    char mark;

    printf("\nTic Tac Toe\n");
    printf("Player 1 (X) - Player 2 (O)\n");

    do {
        drawBoard();

        if (player == 1)
            mark = 'X';
        else
            mark = 'O';

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        // check if valid move
        if (board[choice] != 'X' && board[choice] != 'O') {
            board[choice] = mark;
        } else {
            printf("Invalid move! Try again.\n");
            continue;
        }

        status = checkForWin();

        player = (player % 2) + 1;

    } while (status == 0);

    drawBoard();

    if (status == 1)
        printf("Player %d wins!\n", player == 1 ? 2 : 1);
    else
        printf("It's a draw!\n");

    return 0;
}