#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void star()
{
	printf("******************************\n");
	printf("**** 1.play ****** 0.exit ****\n");
	printf("******************************\n");
}
void game()
{
	char board[ROW][COL] = {' '};
	char res;
	reset(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		palyer(board, ROW, COL);
		displayboard(board, ROW, COL);
		res=iswin(board, ROW, COL);
		if (res != 'C')
			break;
		com(board, ROW, COL);
		displayboard(board, ROW, COL);
		res = iswin(board, ROW, COL);
		if (res != 'C')
			break;
	}
	if (res == '*')
		printf("玩家胜\n");
	else if (res == '#')
		printf("电脑胜\n");
	else
		printf("平局\n");
}
int main()
{

	int input = 0;
	
		do
	{
			star();
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