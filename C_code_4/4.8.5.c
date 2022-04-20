#include <stdio.h>
int main(void)
{
	float ms,mg,time;
	printf("Please enter your ms:");
	scanf("%f",&ms);
	printf("Please enter your mg:");
	scanf("%f",&mg);
	printf("At %.2f meabits per second, a file of %.2f megabytes.\n",
			ms,mg);
	time = mg / ms;
	printf("downloads in %f seconds!\n",time);
	return 0;
}
