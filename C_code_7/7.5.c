#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;  //带测试的数字
	unsigned long div;  //可能的约数
	bool biaoji;

	printf("请输入一个数字，来判断是否为素数:");
	printf("(q to quit)\n");
	while (scanf("%lu",&num) == 1)
	{
		for (div=2,biaoji=true; (div*div)<=num; div++)
		{
			if (num%div==0)
			{
				if ((div*div)!=num)
					printf("%lu是素数,约数是%lu和%lu\n",
							num,div,num/div);
				else
					printf("%lu是素数,约数是%lu\n",
							num,div);
				biaoji = false;
			}
		}
		if (biaoji)
			printf("%lu不是素数.\n",num);
		printf("请输入一个数字，来判断是否为素数:");
		printf("(q to quit)\n");
	}
	printf("Bye!\n");
	return 0;
}
