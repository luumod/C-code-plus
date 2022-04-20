#include <stdio.h>
int main(void)
{
	int squ_num,num,sum,input;
	sum = 0;
	num = 0;

	printf("Please enter a number:");
	scanf("%d",&input);

	while (num ++ < input)
	{
		squ_num = num * num;
		sum = sum + squ_num;
	}
	printf("sum is %d\n",sum);
	return 0;
}

