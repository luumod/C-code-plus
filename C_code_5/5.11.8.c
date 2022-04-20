#include <stdio.h>
int main(void)
{
	int num1,num2;

	printf("Thie program computes moduli.\n");
	printf("Enter an integar to serve as the second operand:\n");
	scanf("%d",&num2);
	printf("Now enter the first operand:");
	scanf("%d",&num1);
	printf("%d %% %d is %d\n",num1,num2,num1 % num2);

	while (num1 > 0)
	{
		printf("Enter next number for first operand ");
		printf("(<= 0  to exit):\n");
		scanf("%d",&num1);
		printf("%d %% %d is %d\n",num1,num2,num1 % num2);

	}
	printf("Done!\n");
	return 0;
}
