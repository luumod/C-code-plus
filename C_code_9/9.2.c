#include <stdio.h>
#include <string.h>
#define NAME "yulh"
#define ADDSH "woshibab"
#define PLACE "woshibabdwdad"
#define WIDTH 40
#define SPACE ' '
void star(char ch,int num);  //定义函数原型
int main(void)
{
	int space;

        star('*',WIDTH);
        putchar('\n');

	star(SPACE,16);
	printf("%s\n",NAME); 

	space = (WIDTH - strlen(ADDSH)) /2;
	star(SPACE,space);
	printf("%s\n",ADDSH);

	star(SPACE,(WIDTH-strlen(PLACE))/2);
	printf("%s\n",PLACE);

	star('*',WIDTH);
	putchar('\n');

        return 0;

}

void star(char ch,int num)
{
        int count;

        for (count=1; count<=num; count++)
                putchar(ch);

}

