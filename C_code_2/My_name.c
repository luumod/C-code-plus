//习题2.12 第一题
#include <stdio.h>
#define NAME "Gustav"
#define SURNAME "Mathler"
int main(void)
{
	printf("%s %s\n",NAME,SURNAME);

	printf("%s\n%s\n",NAME,SURNAME);

	printf("%s",NAME);
	printf("%s\n",SURNAME);
	
	return 0;
}
