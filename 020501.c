#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C���Գ������",55 };
	//struct Book* pb = &b1;
	////printf("%s\n", (*pb).name);�ṹ�����.��Ա
	//printf("%s\n", pb->name);//�ṹ��ָ��->��Ա
	//printf("����:%s\n", b1.name);
	//printf("�۸�:%d\n", b1.price);
	//b1.price = 50;
	//printf("�޸ĺ�۸�Ϊ:%d\n", b1.price);
	strcpy(b1.name, "C++");//string copy �ַ�������;
	printf("%s\n", b1.name);
	return 0;
}