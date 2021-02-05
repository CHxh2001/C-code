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
	struct Book b1 = { "C语言程序设计",55 };
	//struct Book* pb = &b1;
	////printf("%s\n", (*pb).name);结构体变量.成员
	//printf("%s\n", pb->name);//结构体指针->成员
	//printf("书名:%s\n", b1.name);
	//printf("价格:%d\n", b1.price);
	//b1.price = 50;
	//printf("修改后价格为:%d\n", b1.price);
	strcpy(b1.name, "C++");//string copy 字符串拷贝;
	printf("%s\n", b1.name);
	return 0;
}