#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i;;)//判断省略 死循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//1->n的阶乘和
//int main()
//{
//	int i = 1;
//	int n;
//	//int j = 0;
//	int m = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;
//		sum = sum + m;
//	}
//	//for (i = 1; i <= n; i++)
//	//{
//	//	for (j = 1; j <= i; j++)
//	//	{
//	//		m = m * j;
//	//	}
//	//	sum = sum + m;
//	//	m = 1;
//	//}
//	printf("%d\n", sum);
//	return 0;
//}


////二分查找法(有序数列)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (k < arr[mid])
//			right = mid - 1;
//		else if (k > arr[mid])
//			left = mid + 1;
//		else
//		{
//			printf("找到\n");
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
#include<string.h>
int main()
{
	int i = 0;
	char password[] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("输入密码\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//strcmp 用于比较字符串 ==不能用于比较字符串
		{
			printf("登入成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (3 == i)
		printf("退出程序\n");
	return 0;
}