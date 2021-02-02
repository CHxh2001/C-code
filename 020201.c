#define X 10//#define 定义的常量
#include<stdio.h>
int main()
{
	int x;
	const int a=1;
	//a=2 err; 不能改 常变量 实质还是变量
    enum DAY//枚举常量
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};//TUE=9,err
	printf("%d\n",TUE);
    return 0;
}
