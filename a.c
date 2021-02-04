#include <stdio.h>
double fact (int n);
int main()
{
	int i,n;
	double result=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		result=result+fact(i);
		
	}printf("result=%.0f\n",result);
	return 0;
}
   double fact(int n)
   {
	   int i;
	   double product;
	   product=1;
	   for(i=1;i<=n;i++)
	   {
		   product=product*i;
	   }
	   return product;
   }

