#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int D=1234;
//	printf("0%o\n", D);
//	printf("0x%x\n", D);
//	return 0;
//}ʮ������1234,�ð˽��ƺ�ʮ�����Ʊ�ʾ

//�������
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


//��Сдת����
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
	//	getchar()//����'\n';
	//} while (ch != EOF);
	return 0;
}