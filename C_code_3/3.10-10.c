#include <stdio.h>
int main(void)
{
	int cows,legs,integer;
	printf("How many cow legs did you count?\n");
	scanf("%d",&legs);
	cows=legs/4;
	printf("That implies there are %d cows,\n",cows);

	return 0;
}
