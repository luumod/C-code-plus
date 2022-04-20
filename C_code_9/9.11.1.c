#include <stdio.h>
int min(int x,int y);
int main(void)
{
	int a=1,b=4;
	int result=min(a,b);
	printf("最小值:%d\n",result);
	return 0;
}
int min(int x,int y)
{
	return (x>y)?y:x;
}
