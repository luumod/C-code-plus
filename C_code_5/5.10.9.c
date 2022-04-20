#include <stdio.h>
#define END 'g'/*预定义终止值为 'g'*/
int main(void)
{
	char ch = 'a'-1;

	while (ch ++ < END)
		printf("%5c",ch);
	        printf("\n");
	return 0;
}
