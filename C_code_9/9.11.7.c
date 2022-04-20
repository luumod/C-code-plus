#include <stdio.h>
void get_char(void);
int position(char ch);
int main(void)
{
	get_char();
	return 0;
}
void get_char(void)
{
	char ch;
	printf("请输入字符");
	while ((ch=getchar())!=EOF)
	{
		if (getchar()!= '\n')  //清除换行符的输入
			continue;
		if (position(ch)!=-1)
			printf("字符%c对应的位置是:%d\n",ch,position(ch));
		else
			printf("%c不是个字符\n",ch);
	}
}

int position(char ch)
{
	if (ch>='A'&&ch<='Z')
		return ch-'A'+1;
	if (ch>='a'&&ch<='z')
		return ch-'a'+1;
	return -1;
}

