#include<stdio.h>
int main()
{
	int a=5,d=4,c=0;
	int b=a<<2;//将二进制数值向前移位
	printf("%d\n",b);
    //c=a&d;
	//c=a|d;
	c=a^d;
	printf("%d\n",c);
	return 0;
}