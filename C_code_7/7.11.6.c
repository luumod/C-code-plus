#include <stdio.h>
int main(void)
{
	int i=0;
	while (i<3)
	{
		switch(i++)
		{
			case 0: printf("A ");
			case 1: printf("B ");
			case 2: printf("C ");
			default:printf("OH on.");
		}
		putchar('\n');
	}
	return 0;
}
