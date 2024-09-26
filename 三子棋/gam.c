#include "game.h"
void menu(void)
{
	printf("***************************\n");
	printf("***************************\n");
	printf("**1.play game 0.exit game**\n");
	printf("***************************\n");
	printf("***************************\n");
	printf("请选择：>");
		
}
void start(void)
{
	printf("-----start game-----");
}
setboard(char board[row][line], char numb1)
{
	for (int numb2 = 0; numb2 < row; numb2++)
	{
		for (int numb3 = 0; numb3 < line; numb3++)
			board[numb2][numb3] = numb1;
	}
}
displayboard(char board[row][line])
{
	printf("\n");
	printf("\n");
	int numb2 = 0;
	int numb3 = 0;
	for (numb2 = 0; numb2 < row; numb2++)
	{

		for (numb3 = 0; numb3 < line; numb3++)
		{
			printf(" %c ", board[numb2][numb3]);
			if (numb3 < line - 1)
				printf("|");

		}
		printf("\n");
		if (numb2 < line - 1)
			printf("---|---|---\n");
	}
	printf("\n");
}
playerinput(char board[row][line])
{
	int x;
	int y;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("该坐标已经被占用,请重新输入\n");
				continue;
			}


		}
		else
		{
			printf("非法坐标输入\n");
			continue;
		}
	}
}
computerinput(char board[row][line])
{
	while (1)
	{
		int x = 0;
		int y = 0;
		x = rand() % row;
		y = rand() % line;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
		else
		{
			continue;
		}
	}
}
char checkboard(char board[row][line])
{
	int numb3 = 0;
	int numb1 = 0;
	int numb2 = 0;
	int i;
	int j;
	int numb9 = 0;
	for (numb1 = 0; numb1 < row; numb1++)
	{
		if (board[0][numb1] == board[1][numb1] && board[0][numb1] == board[2][numb1]) //检测行
		{
			if (board[0][numb1] == '#')
				return 'x';
			if (board[0][numb1] == '*')
				return 'o';
		}
		if (board[numb1][0] == board[numb1][1] && board[numb1][0] == board[numb1][2]) //检测列
		{
			if (board[numb1][0] == '#')
				return 'x';
			if (board[numb1][0] == '*')
				return 'o';
		}
	}
	if (board[numb9][0] == board[1][1] && board[numb9][0] == board[2][2])
	{
		if (board[0][0] == '#')
			return 'x';
		if (board[0][0] == '*')
			return 'o';
	}
	if (board[numb9][2] == board[1][1] && board[numb9][2] == board[2][0])
	{
		if (board[0][2] == '#')
			return 'x';
		if (board[0][2] == '*')
			return 'o';
	}

	for (i = 0; i < line; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] != ' ')
			{
				numb3++;
			}

		}
	}
	if (numb3 == 9)
	{
		return 2;
	}
	

	

}
void judgeboard(char board[line][row])
{
	char ch1;
	ch1 = checkboard(board);
	if (ch1 == 'x')
	{
		printf("You win");
		exit(0);
	}
	if (ch1 == 'o')
	{
		printf("You are shit");
		exit(0);
	}
	if (ch1 == 2)
	{
		printf("Both of you are shit");
		exit(0);
	}
}

