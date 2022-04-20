#include <stdio.h>
#include <string.h>
int main(void)
{
	char name1[40];
	char name2[40];
	unsigned width1,width2;
	int str1,str2;
	
	int wname,mname;

	printf("请输入名称:");
	scanf("%s",name1);
	printf("请输入姓氏:");
	scanf("%s",name2);
	printf("%s %s",name1,name2);
	
	width1 = str1 = strlen(name1);// *修饰符指定宽度
	width2 = str2 = strlen(name2);
	printf("\n%*d ",width1,str1);// width指定宽度 str确定元素个数
	printf("%*d\n",width2,str2);
	printf("%-*d ",width1,str1);
	printf("%-*d\n",width2,str2);

	wname = printf("%s",name1);
        printf(" ");	// 获取printf的返回值
	mname = printf("%s",name2);
	printf("\n%*d %*d\n",wname,wname,mname,mname);

	return 0;
}

