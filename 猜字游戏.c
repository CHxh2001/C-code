#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void start()
{
	printf("*******��������Ϸ*******\n");
	printf(" **** 1.��ʼ 0.�˳�****\n");//��ʾ
}
void game()
{
	int yours;
	int random = rand() % 100;
	printf("������0-100֮�����\n");
	while (1)
	{
		scanf("%d", &yours);
		if (yours > random)
			printf("�´���\n");
		else if (yours < random)
			printf("��С��\n");
		else
		{
			printf("��ϲ �¶��ˣ�\n");
			break;
		}
	}

}
int main()
{
	srand((unsigned)time(NULL));//�����������ʼλ��
	
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
			printf("�������\n");
		start();
		
	}

	return 0;
}
