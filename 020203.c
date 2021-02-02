#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n",strlen("c:\test\32\test.c"));//13
    printf("%d\n",strlen("c:\\test\\32\\test.c"));//17

	return 0;
}
