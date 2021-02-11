#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////求n的阶乘
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
//斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//递归  重复计算过多 效率低
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
}//迭代 效率高
int main()
{
	int n=0;
	int fib;
	scanf("%d", &n);
	fib = Fib(n);
	printf("%d\n", fib);
	return 0;
}