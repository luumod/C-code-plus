#include <stdio.h>
#define Eng_key 2.54 //定义一英寸的厘米
int main(void)
{
	float height;
	printf("请输入身高: ");
	scanf("%f",&height);
	printf("你的身高是%f英寸\n",height /Eng_key);

	return 0;
}
