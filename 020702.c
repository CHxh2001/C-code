#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//int ret=printf("hello world!");
//	//printf("\n");
//	//printf("%d\n", ret);
//	//int a = 0xABCDEF;
//	//printf("%15d", a);//���Ϊ15
//	return 0;
//int main()
//{
//	/*char*/int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)//if(isalpha(ch) �ж��Ƿ�Ϊ��ĸ
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}
int main()
{
	int year;
	int month;
	int day;
	scanf("%4d%2d%2d", &year, &month, &day);
	printf("year=%4d\n",year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);//%02d �涨ֻ��һλʱ��0��λ;

	return 0;
}