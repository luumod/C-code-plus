#include <stdio.h>
void tuan(char ch,int x,int y);
int main(void)
{
	char ch;
	int x,y;
	
	printf("输入字符:");
	scanf("%c",&ch);
	printf("输入行列:");
	scanf("%d %d",&x,&y);
	tuan(ch,x,y);
	return 0;
}
void tuan(char ch,int x,int y)
{
	for (int a=1; a<=x; a++)
	{
		for (int b=1;b<=y;b++)
			printf("%c",ch);
		printf("\n");
	}
}
