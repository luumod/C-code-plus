#include <stdio.h>
int main(void)
{
	int count=0;
	int AA=0;
	char ch;
	printf("请输入字符:#停止\n");
	while ((ch=getchar())!='#')
	{
		switch (ch)
		{
			case 'e': 
				AA=1;
				break;
			case 'i':
				if (AA==1)
					count++;
				else
					AA=0;
			default:
				printf("%c",ch);

		}
		
	}
	printf("\n");
	printf("ei 总共出现了%d次\n",count);
	return 0;
}
