// 打印指定范围的所有整数平方和
#include <stdio.h>
#include <stdbool.h>
long get_long(void);  //验证输入的数是整数
bool bad_limits(long begin,long end,
		long low,long high);  //验证范围上下限是否有效
double sum_squares(long a,long b);    //计算a-b平方和
int main(void)
{
	const long MAX = 10000000L;   //设置最大最小值限制
	const long MIN = -10000000L;
	long start,stop;   // 你输入的数字
	double answer;     //最后结果 ：平方和

	printf("请在%ld和%ld范围内输入开始和结束的两个数字:\n输入两个零退出\n",MIN,MAX);
	printf("lower limits: ");
	start=get_long();
	printf("upper limits: ");
	stop=get_long();
	while (start!=0 || stop!=0)  
	{
		if (bad_limits(start,stop,MIN,MAX))  //false错误 进行 重试
			printf("输入有误,请重试:\n");
		else
		{	
			answer = sum_squares(start,stop);
			printf("在%ld到%ld范围内,平方和为:%g\n",MIN,
					MAX,answer);
		}
		//重复输入
		printf("请在%ld和%ld范围内输入开始和结束的两个数字:\n",MIN,
				MAX);
        	printf("lower limits: ");
        	start=get_long();
        	printf("upper limits: ");
        	stop=get_long();
	}
	printf("Bye!\n");
	return 0;
}

long get_long(void)
{
	long input;
	char ch;

	while (scanf("%ld",&input)!=1)  //输入的不是整形
	{
		while ((ch=getchar())!='\n')  
			putchar(ch);  //处理错误信息
		printf("您输入的数字不合法.\n");
		printf("请重新输入,例如:3 -9 2\n");
	}
	return input;
}

double sum_squares(long a,long b)
{
	double total=0;
	long i;
	for (i=a; i<=b; i++)
		total += (double) i *(double) i;   //结果计算式
	return total;
}

bool bad_limits(long a,long b, long low, long high)
{
	bool result =false;

	if (a>b)
	{
		printf("错误:%ld不能大于%ld\n",a,b);
		result = true;
	}
	
	if (a<low || b <low)
	{
		printf("%ld和%ld不能小于最小值限制\n",a,b);
		result = true;
	}

	if (a>high || b>high)
	{
		printf("%ld和%ld不能大于最大值限制\n",a,b);
		result = true;
	}
	return result;
}
	


		

