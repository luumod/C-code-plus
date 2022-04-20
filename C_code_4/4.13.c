//  printf()的返回值
#include <stdio.h>
int main(void)
{
	int ba = 212;
	int rv;

	rv = printf("%d F is water boliing point.\n",ba);
	printf("The printf() function printed %d characters.\n",
			rv);/*计算rv的字符数*/

	return 0;
}
