//badcount.c --参数错误的情况
#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 2;
	float c = 5.0f;
	float d = 9.0f;

	printf("%d\n",a,b);
	printf("%d %d %d\n",a);
	printf("%d %d\n",c,d);

	return 0;
}
