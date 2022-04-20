#include <stdio.h>
int main(void)
{
	int num;
	char ch1,ch2;
	float f;

	ch1 = 's';
	ch2 = 'o';
	num = ch1 - ch2;
	f = num;
	printf("%c%c%c:%d %3.2f\n",ch1,ch2,ch1,num,f);

	return 0;
}
