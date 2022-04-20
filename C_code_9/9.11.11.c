#include <stdio.h>
void Fibonacci(int j);
int main(void)
{
	int j;
	char ch;
	int x;
	printf("斐波那切数列列数:");
	while (x=scanf("%d",&j) ==1)
	{
		if (j>=2)
		{	
			Fibonacci(j);
			printf("Please enter again:\n");
		}
	}
	return 0;
}
void Fibonacci(int j)
{
	int a=0,b=1;
	int s,i;
	for (i=1; i<=j; i++)
	{	
		printf("%d",b);
		s=a+b;
		a=b;
		b=s;
	}
	printf("\n");
}
