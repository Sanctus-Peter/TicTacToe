/**
 * tictactoe - A game of tictactoe to be played between 2 players
 *
 * Created by: Sanctus-Peter
 * cc: 1st July, 2022.
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define row 3
#define col 3
#define win 1
#define draw 0
#define playOn -1

void board(char nSquare[row][col]);
int checkWin(char nSquare[row][col]);

/**
 * main - main function to start the game
 * Return: 0 if successful, 1 otherwise
 */

int main(void)
{
	char nSquare[row][col] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	int player = 1;
	int choice, chkValid = playOn;
	char var;

	while (chkValid == playOn)
	{
		board(nSquare);
		player = (player % 2) ? 1 : 2;
		printf("Player %d, take turn, Enter a valid number: ",
				player);
		scanf("%d", &choice);

		var = (player == 1) ? 'X' : 'O';

		if (choice == 1 && nSquare[0][0] == '1')
			nSquare[0][0] = var;
		else if (choice == 2 && nSquare[0][1] == '2')
			nSquare[0][1] = var;
		else if (choice == 3 && nSquare[0][2] == '3')
			nSquare[0][2] = var;
		else if (choice == 4 && nSquare[1][0] == '4')
			nSquare[1][0] = var;
		else if (choice == 5 && nSquare[1][1] == '5')
			nSquare[1][1] = var;
		else if (choice == 6 && nSquare[1][2] == '6')
			nSquare[1][2] = var;
		else if (choice == 7 && nSquare[2][0] == '7')
			nSquare[2][0] = var;
		else if (choice == 8 && nSquare[2][1] == '8')
			nSquare[2][1] = var;
		else if (choice == 9 && nSquare[2][2] == '9')
			nSquare[2][2] = var;
		else
		{
			printf("\n\nInvalid move, Player %d make a valid move", player);
			player -= 1;
			system("pause");
		}

		chkValid = checkWin(nSquare);

		player += 1;
	}

	board(nSquare);

	if (chkValid == win)
		printf("  Congratulations!!! \a Player %d win\n\n", --player);
	else
		printf("  Game ended in a draw\a\n\n");


	return (0);
}

/**
 * board - displays board on the console
 * @nSquare: array of board placement
 */

void board(char nSquare[row][col])
{
	system("clear");
	printf("\n\n\n\t   Tic Tac Toe\n\n\n");
	printf("   Player 1 (X) - player 2 (O)\n\n\n");
	printf("\t     |     |     \n");
	printf("\t  %c  |  %c  |  %c  \n",
			nSquare[0][0], nSquare[0][1], nSquare[0][2]);
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t  %c  |  %c  |  %c  \n",
			nSquare[1][0], nSquare[1][1], nSquare[1][2]);
	printf("\t_____|_____|_____\n");
	printf("\t     |     |     \n");
	printf("\t  %c  |  %c  |  %c  \n",
			nSquare[2][0], nSquare[2][1], nSquare[2][2]);
	printf("\t     |     |     \n\n");
}

/**
 * checkWin - checks if the game is over and if there is a win
 * @nSquare: array position of the board
 *
 * Return: 1 if there is a win, 0 if there is a draw
 */

int  checkWin(char nSquare[row][col])
{
	if (nSquare[0][0] == nSquare[0][1] && nSquare[0][1] == nSquare[0][2])
		return (win);
	else if (nSquare[1][0] == nSquare[1][1] && nSquare[1][1] == nSquare[1][2])
		return (win);
	else if (nSquare[2][0] == nSquare[2][1] && nSquare[2][1] == nSquare[2][2])
		return (win);
	else if (nSquare[0][1] == nSquare[1][1] && nSquare[1][1] == nSquare[2][1])
		return (win);
	else if (nSquare[0][0] == nSquare[1][0] && nSquare[1][0] == nSquare[2][0])
		return (win);
	else if (nSquare[0][2] == nSquare[1][2] && nSquare[1][2] == nSquare[2][2])
		return (win);
	else if (nSquare[0][0] == nSquare[1][1] && nSquare[1][1] == nSquare[2][2])
		return (win);
	else if (nSquare[0][2] == nSquare[1][1] && nSquare[2][0] == nSquare[1][1])
		return (win);
	else if (nSquare[0][0] != '1' && nSquare[0][1] != '2' && nSquare[0][2] != '3'
			&& nSquare[1][0] != '4' && nSquare[1][1] != '5'
			&& nSquare[1][2] != '6' && nSquare[2][0] != '7'
			&& nSquare[2][1] != '8' && nSquare[2][2] != '9')
		return (draw);
	else
		return (playOn);
}
