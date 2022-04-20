#include <stdio.h>
#define BOOK "war and peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.",BOOK,cost);
	printf("\nThat is %.0f%% of list.\n",percent);

	return 0;
}
