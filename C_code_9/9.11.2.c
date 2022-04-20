#include <stdio.h>
void char_ch(char ch,int i, int j);
int main(void)
{
	char ch;
	int i=5,j=4;
	char_ch(ch,i,j);
	return 0;
}
void char_ch(char ch,int i,int j)
{
	scanf("%c",&ch);
	for (int a=1; a<=j; a++)
	{
		for (int b=1; b<=i; b++)
			printf("%c",ch);
		printf("\n");
	}
}
