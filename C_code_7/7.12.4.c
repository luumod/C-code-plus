#include <stdio.h>
int main(void)
{
	char num;
	int j=0;
	printf("请输入字符:#退出:");
	while ((num=getchar()))
	{
		if (num=='#')
			break;
		else if (num=='.')
		{
			printf("!");
			j++;
		}	
		else if (num=='!')
		{
			printf("!!");
			j++;
		}
		else
			printf("%c",num);
	}
	printf("进行了%d次替换.\n",j);
	return 0;
}

