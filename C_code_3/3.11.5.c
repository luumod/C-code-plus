#include <stdio.h>
#define seconds 3.156e7 /* 预编译指令定义一年的秒数*/
int main(void)
{
	int age;
	float Age_Seconds;
	printf("请输入年龄: ");
	scanf("%d",&age);
	Age_Seconds = age * seconds;
	printf("你的年龄所对应的秒数是: %f\n",Age_Seconds);

	return 0;
}

