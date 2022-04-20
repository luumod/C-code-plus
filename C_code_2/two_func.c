//two_func.c 一个文件包含两个函数
#include <stdio.h>
void butler(void); //创建函数原型
int main(void)
{
	printf("How are you?\n");
	butler();
	printf("What is your name?\n");

	return 0;
}
void butler(void)  //函数定义
{
	printf("I am fine thanks.\n");
}

