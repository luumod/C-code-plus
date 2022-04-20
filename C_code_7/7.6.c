#include <stdio.h>
int main(void)
{
	const char end='.';
	char ch;
	int count=0;

	while ((ch=getchar())!=end)
	{
		if (ch!='"'&&ch!='\'')
			count++;
	}
	printf("字符总数为:%d",count);
	return 0;
}
