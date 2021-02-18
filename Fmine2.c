#define _CRT_SECURE_NO_WARNINGS 1
#include "Fmine.h"
void star()
{
	printf("**************************\n");
	printf("******1.开始  0.退出******\n");
	printf("**************************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initboard(mine,ROWS,COLS,'0');//初始化
	initboard(show, ROWS, COLS,'*');
	//打印mine棋盘
	display(show,ROWS,COLS);
	//设置雷
	setmine(mine,ROW,COL);
	//玩家扫雷
	int wins = 0;
	display(mine, ROWS, COLS);
	paly(mine,show, ROW, COL);
	printf("\n");
}
int main()
{
	int input = 0;
	do
	{
		star();
		printf("请选择->");
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
			printf("输入错误，请重新输入->\n");
		}
	} while (input);
	return 0;
}