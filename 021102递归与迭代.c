#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////��n�Ľ׳�
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n;
//	int fac;
//	scanf("%d", &n);
//	fac = Fac(n);
//	printf("%d\n", fac);
//	return 0;
//}
//쳲���������
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//�ݹ�  �ظ�������� Ч�ʵ�
int Fib(int n)
{
	int count = 1;
	int a = 1, b = 1, c = 1;
	while (count <= n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	return c;
}//���� Ч�ʸ�
int main()
{
	int n=0;
	int fib;
	scanf("%d", &n);
	fib = Fib(n);
	printf("%d\n", fib);
	return 0;
}