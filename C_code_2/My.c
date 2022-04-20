//2.12 第二题
#include <stdio.h>
#define DAYS_PER_YEAR 365
int main(void)
{
	int age,days;
	age=18;
	days=age*DAYS_PER_YEAR;

	printf("我今年%d岁了\n",age);
	printf("我今年%d天了\n",days);
	return 0;
}
