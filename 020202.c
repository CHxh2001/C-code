#include<stdio.h>
#include<string.h>
//´òÓ¡abc
int main ()
{
	char arr1[]="abc";//'abc\0'
	char arr2[]={'a','b','c',0/* \0 */};
	char arr[]={'a','b','c'/* ,0 */};
    printf("%d,%d\n",strlen(arr1),strlen(arr));
	return 0;
}