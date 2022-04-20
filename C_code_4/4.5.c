// limit.h float.h
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("%d\n",INT_MAX);
	printf("%lld\n",LLONG_MIN);
	printf("%e\n",DBL_MAX);
	printf("%e\n",FLT_MAX);
	printf("%e\n",DBL_MIN);

	return 0;
}
