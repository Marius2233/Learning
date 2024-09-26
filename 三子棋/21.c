#include "game.h"
int main(void)
{
	srand((unsigned int)time(NULL));
	
	int numb1;
	int numb3;
	int x;
	int y;
	char numb2 = ' ';
	char board[row][line] = { 0 };
	menu();
	
	
	do
	{
		scanf("%d", &numb1);
		printf("\n");
		switch (numb1)
		{
		case 1:
			start();
			setboard(board, numb2);
			displayboard(board);
			while(1)
			{
				playerinput(board);
				displayboard(board);
				judgeboard(board);
			
				computerinput(board);
			
				displayboard(board);
				
				judgeboard(board);
				
				
				
			}
			break;
		case 0:
			printf("不想玩滚");
			exit(0);
		default:
			printf("输入值无效\n");
			printf("请重新选择:>");
			
		}
	} while (1);
	displayboard(board);


	return 0;
}