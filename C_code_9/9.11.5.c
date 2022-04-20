#include <stdio.h>
void large_of(int *x,int*y);
int main(void)
{
	int a,b;
	printf("请输入两个数字: ");
	scanf("%d%d",&a,&b);
	large_of(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void large_of(int *x,int*y)
{
	if (*x>*y)
		*y=*x;
	else 
		*x=*y
}
