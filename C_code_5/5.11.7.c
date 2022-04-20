//计算一个数的立方,采用带参函数的形式
#include <stdio.h>
double cac(double num);  /* 参数的函数的声明*/
int main(void)
{
	double input,result;
	printf("Enter a number:");
	scanf("%lf",&input);

	result=cac(input);  /*参数函数的调用*/
	printf("The finally result is :%lf\n",result);

	return 0;
}
double cac(double num)   /*创建函数定义*/
{
	/*计算数的立方*/
	double b = num *num *num;  

	return b;  /* 要返回计算后函数的值，以便调用给主函数*/
}
