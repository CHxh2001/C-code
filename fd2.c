#include<stdio.h>
int main(void)
{
	double x,y;
	printf("Enter x=\n");
	scanf("%lf",&x);
	if(x!=0)
	{
		y=1/x;
	}
	else
	{
		y=0;
	}
	printf("y=f(%f)=%.2f\n",x,y);
	return 0;
}