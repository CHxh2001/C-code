#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void reset(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void palyer(char board[ROW][COL], int row, int col)
{
	printf("请输入着子坐标\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{

			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("已占用\n");
		}
		else
			printf("坐标错误\n");

	}
}
void com(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

}