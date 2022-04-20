#include <stdio.h>
int main(void)
{
	int guess=1;
	int ch;
	printf("猜数字:请输入一个数字:\n");
	printf("%d",guess);
	while ((ch=getchar())!='y')
	{
		if (ch=='n')
			printf("是这个吗%d\n",++guess);
		else 
			printf("我不理解\n");
		while (ch=getchar()!='\n')
			continue;
	}
	printf("我知道了.\n");
	return 0;
}
