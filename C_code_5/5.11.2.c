#include <stdio.h>
int main(void)
{
	int num,n = 0;

	printf("Please enter a int number:");
	scanf("%d",&num);

	while (n++ < 11)
	{
		printf("%5d",num);
		num +=1;
	}
	printf("\n");	
	return 0;
}
