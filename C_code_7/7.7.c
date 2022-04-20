//统计单词程序
#include <stdio.h>
#include <ctype.h>  //为isspace 提供函数原型
#include <stdbool.h>   //为布尔类型提供定义
int main(void)
{
	char ch;   //读入字符
	const char STOP='|';  //终止符号
	char before;  //读入的前一个字符
	long n_char=0L;	//字符数
	int n_lines=0;   //行数
	int n_words=0;   //单词数
	int p_lines=0;   //不完整行数
	bool inword=false;  //c在单词中，则为TRUE

	printf("请输入一段句子:(| to quit)\n");
	before='\n';   //用于识别完整的行
	while ((ch=getchar())!=STOP)
	{
		n_char++;   //统计字符
		if (ch=='\n')
			n_lines++;  //统计行
		if (!isspace(ch) && !inword)	//不是空白字符且为True
		{
			inword=true;
			n_words++;	//统计单词
		}
		if (isspace(ch) && inword)    //是空白字符并且为False
			inword=false;  //到达行的末尾
		before=ch;  //保存字符的值
	}
	if (before!='\n')
		p_lines=1;
	printf("你输入的字符数为%ld,单词数为%d,行数为%d,不完整行数为%d\n",
			n_char,n_words,n_lines,p_lines);
	return 0;
}
