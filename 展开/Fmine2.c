#define _CRT_SECURE_NO_WARNINGS 1
#include "Fmine.h"
void star()
{
	printf("**************************\n");
	printf("******1.��ʼ  0.�˳�******\n");
	printf("**************************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initboard(mine,ROWS,COLS,'0');//��ʼ��
	initboard(show, ROWS, COLS,'*');
	//��ӡmine����
	display(show,ROWS,COLS);
	//������
	setmine(mine,ROW,COL);
	//���ɨ��
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
		printf("��ѡ��->");
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
			printf("�����������������->\n");
		}
	} while (input);
	return 0;
}