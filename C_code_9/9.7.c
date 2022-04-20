#include <stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
	int num;

	printf("This program calculates factorials.\n");
	printf("Enter a value in range(0-12)(q to quit):\n");
	while (scanf("%d",&num)==1)
	{
		if (num<0)  //小于零没有阶乘
			printf("No negative number,please.\n");
		else if (num>12)
			printf("please enter under 12.\n");
		else
		{
			printf("循环: %d factorial = %ld\n",
					num,fact(num));
			printf("递归: %d factorial = %ld\n",
					num,rfact(num));
		}
		printf("Enter a value in range(0-12)(q to quit):\n");
	}
	printf("Bye!\n");
	return 0;
}

long fact(int n)
{
	long num;   //循环
	for (num=1; n>1; n--)
		num=num*n;
	return num;
}
long rfact(int n)
{
	long num;
	if (n>0)   //递归
		num=n*rfact(n-1);
	else
		num=1;  
	return num;
}
