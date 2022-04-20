#include <stdio.h>
#include <float.h>/*指定头文件*/
int main(void)
{
	double num1 = 1.0/3.0;
	float num2 = 1.0/3.0;
	printf("[%.6f] [%.12f] [%.16f]\n",num1,num1,num1);
	printf("[%.6f] [%.12f] [%.16f]\n",num2,num2,num2);

	printf("%d %d\n",FLT_DIG,DBL_DIG);

	return 0;
}
