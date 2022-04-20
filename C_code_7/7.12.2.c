#include <stdio.h>
int main(void)
{
	char ch;
	int count=0;
	while ((ch=getchar())!='#')
	{
		if (count++ %8==0)
			printf("\n"); //每八个字符打印换行
		if (ch=='\n')
			printf("'\\n'-%03d. ",ch);
		else if (ch='\t')
			printf("'\\t'-%03d. ",ch);
		else
			printf("'%c'-%03d. ",ch,ch);
	}
	printf("Done!\n");
	return 0;
}
