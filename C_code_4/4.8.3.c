//4.8.3
#include <stdio.h>
int main(void)
{
	float input;
	printf("请输入一个小数:");
	scanf("%f",&input);
	printf("a.The input is %f or %e.\n",input,input);
	printf("b.The input is %+2.3f or %2.3E.\n",input,input);

	return 0;
}
