#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	//char a[] = { '1','2','3','4','5','\0' };
	//printf("%d\n", strlen(a));
	//int b[] = { 1,2,3,4,5 };
	//int c = sizeof(b) / sizeof(b[0]);
	//printf("%d\n", c);
	int a = 10;
	//printf("%p\n", a);
	int* b = &a;
	*b = 20;
	printf("%d\n", a);
	printf("%d\n", sizeof(b));
	return 0;
}

//int main()
//{
//	int a = 0, b;
//	b = ~a;
//	//a 00000000000000000000000000000000
//	//b 11111111111111111111111111111111
//	//原码 反码 补码
//	// 10000000000000000000000000000000
//	// 10000000000000000000000000000001  -> -1
//	printf("%d\n", b);
//	return 0;
//}
//#define MAX(X,Y) (X>Y?X:Y) //宏定义
//               //条件操作符
//int main()
//	{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//	}