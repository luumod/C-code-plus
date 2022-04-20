#include <stdio.h>
int main(void)
{
	int i = 1;
	float n;
	printf("Watch out,Here come a bunch of fractions!\n");
	while (i ++ <30)
	{
		n = 1.0/ i;
		printf("%.2f\n",n);
	}
	printf("That is all,folks!\n");
	return 0;
}
