#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int D=1234;
//	printf("0%o\n", D);
//	printf("0x%x\n", D);
//	return 0;
//}十进制数1234,用八进制和十六进制表示

//反向输出
//int main()
//	{
//	int a;
//	scanf("%d", &a);
//	while (a)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//		return 0;
//	}


//大小写转换；
int main()
{
	int ch=0;
	while ((ch=getchar()) != EOF)//Ctrl Z -> EOF
	{
		printf("%c\n", ch + 32);
		getchar();
	}
	//int ch;
	//do
	//{
	//	ch = getchar();

	//	putchar(ch+32);
	//	getchar()//清理'\n';
	//} while (ch != EOF);
	return 0;
}