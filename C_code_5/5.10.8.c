#include <stdio.h>
int main(void)
{
	const int Ten=7;  /*const + 类型 + 变量名 +赋值*/
	int n = 0;

	while (n ++ < Ten)
		printf("%d",n);
	printf("\n");
	return 0;
}
