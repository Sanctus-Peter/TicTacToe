#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define row 3
#define col 3
#define win 1
#define draw 0
#define playOn -1

char nSquare[row][col] = {
	{'1','2','3'},
	{'4','5','6'},
	{'7','8','9'}
};

void board();
bool checkWin(void);

int main (void)
{
	int player = 1;
	int choice, chkValid = playOn;
	char var;

	while(chkValid == playOn)
	{
		board();
		player = (player % 2)? 1 : 2;
		printf("Player %d, take turn, Enter a valid number: ",
				player);
		scanf("%d", &choice);

		var = (player == 1)? 'X' : 'O';
		
		if(choice == 1 && nSquare[0][0] == '1')
			nSquare[0][0] = var;
		else if(choice == 2 && nSquare[0][1] == '2')
			nSquare[0][1] = var;
		else if(choice == 3 && nSquare[0][2] == '3')
			nSquare[0][2] = var;
		else if(choice == 4 && nSquare[1][0] == '4')
			nSquare[1][0] = var;
		else if(choice == 5 && nSquare[1][1] == '5')
			nSquare[1][1] = var;
		else if(choice == 6 && nSquare[1][2] == '6')
			nSquare[1][2] = var;
		else if(choice == 7 && nSquare[3][0] == '7')
			nSquare[3][0] = var;
		else if(choice == 8 && nSquare[3][1] == '8')
			nSquare[3][1] = var;
		else if(choice == 9 && nSquare[3][2] == '9')
			nSquare[3][2] = var;
		else
		{
			printf("Invalid move, Player %d make a valid move", player);
			player -= 1;
		}
	}
	
	
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
	printf("\t     |     |     \n\n");
}

bool  checkWin(void)
{

}


