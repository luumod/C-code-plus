#include <stdio.h>
int main(void)
{
	char ch;
	int kongge,huanhang,qita;
	printf("请输入字符:");
	while ((ch=getchar())!='#')
	{
		if (ch==' ')
			kongge++;
		else if (ch=='\n')
			huanhang++;
		else 
			qita++;
	}

	printf("空格数:%d,换行符数:%d,其他字符数:%d\n",kongge,
				huanhang,qita);
	return 0;
}
	
