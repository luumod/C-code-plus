#include <stdio.h>
void num_2(unsigned long n);
int main(void)
{	
	unsigned long number;
	printf("please enter a number (q to quit):\n");
	while (scanf("%lu",&number)==1)
	{
		printf("二进制是:\n");
		num_2(number);
		printf("\nEnter a number again:\n");
	}
	printf("Bye!\n");
	return 0;
}
void num_2(unsigned long n)
{
	int r;

	r=n%2;     //奇数末尾是1, 偶数末尾是0； 通过%2的余数来判断.
	if (n>=2)
		num_2(n/2); // n/2 取整后 继续进行第一步%2操作 
	putchar(r==0?'0':'1');    // 偶0奇1
	return;
}

