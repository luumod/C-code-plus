#include <stdio.h>
double av_sum(double x,double y);
int main(void)
{
	double num1,num2;
	printf("请输入两个数字:");
	scanf("%lf %lf",&num1,&num2);
	double result= av_sum(num1,num2);
	printf("调和平均数: %lf",result);
	return 0;
}
double av_sum(double x,double y)
{
	int rnum1=1/x;
	int rnum2=1/y;
	return 2/(1/rnum1+1/rnum2);
}
