/* 4.8.2*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];
	unsigned width;
	printf("请输入你的名字: ");
	scanf("%s",name);
	width = strlen(name) +3;  //width指定字段宽度
	printf("欢迎您,**\"%s\"**\n",name);
	printf("欢迎您,**\"%20s\"**\n",name);
	printf("欢迎您,**\"%-20s\"**\n",name);
	printf("欢迎您,**%*s**\n",width,name);//*修饰符,详见83页
	
	return 0;
}
