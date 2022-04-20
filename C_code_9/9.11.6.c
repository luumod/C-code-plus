#include <stdio.h>
void lode(int *a,int *b,int *c);
int main(void)
{
	int x,y,z;
	printf("输入三个数字:");
	scanf("%d %d %d",&x,&y,&z);
	lode(&x,&y,&z);
	printf("x=%d y=%d z=%d\n",x,y,z);
	return 0;
}
void lode(int *a,int *b,int *c)
{
	int temp;
	if (*a>*b)
	{
		temp=*a;
		*a=*b;
		*b=temp;
	}
	if (*a>*c)
	{
		temp=*a;
		*a=*c;
		*c=temp;
	}
	if (*b>*c)
	{
		temp=*b;
		*b=*c;
		*c=temp;
	}
}
