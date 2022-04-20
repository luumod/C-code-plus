//打印菜单程序
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
	int choice;

	while ((choice=get_choice())!='q')
	{
		switch (choice)
		{
			case 'a': printf("Buy low,sell high.\n");
				  break;
			case 'b': putchar('\a');
				  break;
			case 'c': count();
				  break;
			default: printf("输入错误!\n");
				 break;
		}
	}
	printf("程序结束\n");
	return 0;
}

void count(void)
{
	int i,end;
	printf("终止数字是多少? 输入一个数字:\n");
	end=get_int();
	for (i=1; i<=end; i++)
		printf("%d\n",i);
	while (getchar()!='\n')
		continue;
}

char get_choice(void)
{
	int num;
	printf("欢迎进入菜单:");
	printf("a.advice          b.bell\n");
	printf("c.count           q.quit\n");
	
	num=get_first();
	while ((num<'a' || num>'c')&& num!='q')
	{
		printf("抱歉,您输入的有误,请重新输入:\n");
		num=get_first();
	}
	return num;
}

char get_first(void)
{
	int num;

	num=getchar();
	while (getchar()!='\n')
		continue;

	return num;
}

int gat_int(void)
{
	int input;
	char ch;

	while (scanf("%d",&input)!=1)
	{
		while ((ch=getchar())!='\n')
			putchar(ch);
		printf("这是个错误的数据\n");
		printf("请重新输入数字:\n");
	}

	return input;
}


