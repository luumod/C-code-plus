#include <stdio.h>
#define NAME "于良浩"
#define ADDSH "我是爸爸"
#define PLACE "我家住在山东"
#define WIDTH 40
void star(void);  //定义函数原型
int main(void)
{
	star();
	printf("%s\n",NAME);
	printf("%s\n",ADDSH);
	printf("%s\n",PLACE);
	star();

	return 0;

}

void star(void)
{
	int count;

	for (count=1; count<=WIDTH; count++)
		putchar('*');
	putchar('\n');

}
