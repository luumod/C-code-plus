#include <stdio.h>
int main(void)
{
	char ch;
	int sum;
	printf("请输入字符:#退出\n");
	while (ch=getchar())
	{
		if (ch=='#')
			break;
		switch (ch)
		{
			case '.': printf("!");sum++; break;
			case '!': printf("!!");sum++; break;
			default: printf("%c",ch);
		}
	}
	printf("总共进行了%d次替换.\n",sum);
	return 0;
}
