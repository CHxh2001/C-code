#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap1(int x, int y)//��ֵ���� ���ı�ԭʵ�ε�ֵ
{
	int z;
	z = x;
	x = y;
	y = z;
}
void Swap2(int* pa,int* pb)//��ַ���� �ı�ʵ�ε�ֵ
{
	int z;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 30;
	printf("      %d %d\n", a, b);
	Swap1(a, b);
	printf("Swap1:%d %d\n", a, b);
	Swap2(&a, &b);
	printf("Swap2:%d %d\n", a, b);
	return 0;
}