#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define row 3
#define col 3
char nSquare[row][col] = {
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'}
};

void board();
bool checkWin(void);

int main (void)
{
	board();
	return (0);
}

void board(void)
{
	system("clear");
	printf("\n\n\n\t   Tic Tac Toe\n\n\n");
	printf("   Player 1 (X) - player 2 (O)\n\n\n");
	printf("\t     |     |     \n");
	printf("\t  %c  |  %c  |  %c  \n",
			nSquare[0][0],nSquare[0][1],nSquare[0][2]);
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t  %c  |  %c  |  %c  \n",
			nSquare[1][0],nSquare[1][1],nSquare[1][2]);
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t  %c  |  %c  |  %c  \n",
			nSquare[2][0],nSquare[2][1],nSquare[2][2]);
	printf("\t     |     |     \n");
}

bool  checkWin(void)
{

}


