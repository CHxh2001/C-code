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
		printf("���ʤ\n");
	else if (res == '#')
		printf("����ʤ\n");
	else
		printf("ƽ��\n");
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
				printf("�˳�\n");
				break;
			default:
				printf("������� ��������\n"); 
				break;
			}
	} while (input);
	return 0;
}