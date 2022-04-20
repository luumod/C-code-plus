#include <stdio.h>
void display(char ch,int a,int b);
int main(void)
{
	char ch;  //待打印的字符
	int rows,cols;  //规定打印行 列

	printf("请输入打印字符和行列数:\n");
	while ((ch=getchar())!='\n')
	{
		if (scanf("%d %d",&rows,&cols)!=2)  //说明不是整形
			break;
		display(ch,rows,cols);
		while ((ch=getchar())!='\n')
			continue;
		printf("请输入字符和打印行列数:");
		printf("输入q 退出\n");
	}
	printf("Bye!\n");
	return 0;
}

void display(char ch,int a,int b)
{
	int i,j;
	for (i=1; i<=a; i++)
	{
		for (j=1; j<=b; j++)
			putchar(ch);
		putchar('\n');   
	}
}

			
	
