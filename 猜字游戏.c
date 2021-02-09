#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void start()
{
	printf("*******猜数字游戏*******\n");
	printf(" **** 1.开始 0.退出****\n");//提示
}
void game()
{
	int yours;
	int random = rand() % 100;
	printf("请输入0-100之间的数\n");
	while (1)
	{
		scanf("%d", &yours);
		if (yours > random)
			printf("猜大了\n");
		else if (yours < random)
			printf("猜小了\n");
		else
		{
			printf("恭喜 猜对了！\n");
			break;
		}
	}

}
int main()
{
	srand((unsigned)time(NULL));//设置随机数起始位置
	
	start();
	int input = 1;
	while (input)
	{
		
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 0)
			break;
		else
			printf("输入错误\n");
		start();
		
	}

	return 0;
}
