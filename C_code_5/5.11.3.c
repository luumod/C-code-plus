#include <stdio.h>
#define DAYS 7  /*一周等于七天*/
int main(void)
{
	int days,weeks,day;

	printf("Please enter a days:\n");
	while (days > 0)
	{
		scanf("%d",&days);
		weeks = days / DAYS;
		day = days % DAYS;
		printf("%d days are %d weeks,%d days.\n",
				days,weeks,day);
		printf("Please enter next days:\n");
	}
	printf("Byes!\n");
	return 0;
}
