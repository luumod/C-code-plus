//  4.8.1
#include <stdio.h>
int main(void)
{
	char name[40];
	char name2[30];
	printf("请输入名字:");
	scanf("%s",name);
	printf("请输入姓氏:");
	scanf("%s",name2);
	printf("欢迎你，%s%s!\n",name2,name);

	return 0;
}
