#define X 10//#define ����ĳ���
#include<stdio.h>
int main()
{
	int x;
	const int a=1;
	//a=2 err; ���ܸ� ������ ʵ�ʻ��Ǳ���
    enum DAY//ö�ٳ���
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};//TUE=9,err
	printf("%d\n",TUE);
    return 0;
}
