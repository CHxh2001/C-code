#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////˳���ӡһ�����ĸ�λ����
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//�����ַ�������
int Len(char* ch)
{
	if (*ch != '\0')
		return 1 + Len(ch+1);
	else
		return 0;

}
int main()
{
	char arr[] = "abc";
	int sum = 0;
	sum = Len(arr);
	printf("%d \n", sum);
	return 0;
}