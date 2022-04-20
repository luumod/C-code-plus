// 字符串格式
#include <stdio.h>
#define BLUE "ASDFGHJK xnciuwncun"
int main(void)
{
	printf("[%2s]\n",BLUE);
	printf("[%24s]\n",BLUE);
	printf("[%24.5s]\n",BLUE);
	printf("[%-24.5s]\n",BLUE);

	return 0;
}
