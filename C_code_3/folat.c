//关于一个数加一，再减去原来的数，是否等于1的判断
#include <stdio.h>
int main(void)
{
	float a,b;

	b=2.0e20 + 1.0;
	a=b - 2.0e20;
	printf("%f\n",a);

	return 0;
}
