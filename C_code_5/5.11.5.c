#include <stdio.h>
int main(void)
{
	int day,DAYS,count;
	count = 0;
	day = 0;

	printf("Please enter a day_number:");
	scanf("%d",&DAYS);   /*用户输入的记作DAYS*/

	while (day ++ < DAYS)
		count = count + day;
	printf("in %d days,all counts are %d.\n",DAYS,count);
	return 0;
}
