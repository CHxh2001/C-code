#define _CRT_SECURE_NO_WARNINGS 1
#include"Fmine.h"
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void display(char mine[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows-1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = 0;
	while (count < Setcount)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}
}
int Count(char board[ROWS][COLS],int x,int y)
{
	return board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 8*'0';
}
void paly(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	while (win<row*col-Setcount)
	{
		printf("请输入坐标[] []->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("失败\n");
				display(mine, ROWS, COLS);
				break;
			}
			else
			{
				int count = 0;
				count = Count(mine, x, y);
				show[x][y] = count+'0';
				display(show, ROWS, COLS);
				win++;
			}
		}
		else
		{
			printf("输入错误，请重新输入->");
		}
		}
	if (win == row * col - Setcount)
	{
		printf("排雷成功\n");
		display(mine, ROWS, COLS);
	}
}