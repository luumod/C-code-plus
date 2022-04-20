// altnames.c -- 可移植整数类型名
#include <stdio.h>
#include <inttypes.h>  //支持可移植
int main(void)
{
	int32_t me32;  // me32是一个32位有符号整形变量

	me32=45515151;
	printf("First, assum int32_t is int: ");
	printf("me32=%1d\n",me32);   // %d或者%1d都可以 字符串宏：PRID32
	printf("Next,let is not make any assumptions.\n");
	printf("Instead,use a \"macro\" from inttypes.h: ");
	printf("me32=%"PRId32"\n",me32);
	
	return 0;
}
