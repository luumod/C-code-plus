#include <stdio.h>
char get_first(void);
int main(void)
{
	char ch;
	ch=get_first();
	printf("%c\n",ch);
}
char get_first(void)
{
	char ch;
	ch=getchar();
	do{
		ch=getchar();
	}while (ch == ' '||ch == '\n'||ch=='\t');  /*如果读取到这三种则继续
	读取，直到为非空白字符*/
	return ch;
}	
