#include <stdio.h>
int main(void)  /*计算前20的整数和*/
{
	int num,sum;
	num = 0;
	sum = 0;

	while (num++ < 20)    //先比较后加1  表达式语句
		sum = sum + num;
	printf("sum = %d\n",sum);

	return 0;
}
