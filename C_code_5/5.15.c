//带参数类型的函数转换
#include <stdio.h>
void pound(int n);  /*函数原型声明   要转换成int类型*/
int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0;

	pound(times);   /*int类型的参数*/
	pound(ch);  /*pound(int(ch))*/
	pound(f);   /*pound(int(f))*/

	return 0;
}
void pound(int n)  /*函数定义*/
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}
