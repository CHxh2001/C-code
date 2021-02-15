#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };

	reset(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		palyer(board, ROW, COL);
		displayboard(board, ROW, COL);
		com(board, ROW, COL);
	}


}
int main()
{
	printf("******************************\n");
	printf("**** 1.play ****** 0.exit ****\n");
	printf("******************************\n");
	int input = 0;
	
		do
	{
			scanf("%d", &input);

			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("输入错误 重新输入\n"); 
				break;
			}
	} while (input);
	return 0;
}