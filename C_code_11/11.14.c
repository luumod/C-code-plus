#include <stdio.h>   //puts()函数，但不会主动添加换行符
void put1(const char *string)
{
	while (*string!='\0')
		putchar(*string++);
}
