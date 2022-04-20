#include <stdio.h>
double Temperatures(double num);
int main(void)
{
	double input;

	printf("Enter a Hnum to start:");
	while (scanf("%lf",&input) == 1)  /*读取snanf函数返回值，如果读取数字则返回1，如果读取q则不返回1.*/
	{
		Temperatures(input);
		printf("Please enter a next num:");
	}
	printf("Done!\n");

	return 0;

}
double Temperatures(double num)
{
	double Snum = 5.0/9.0*(num - 32.0);
       	double Knum = Snum + 273.16;

	printf("The %.2lf Hnum is %.2lf Snum.\n",num,Snum);
	printf("The %.2lf Hnum is %.2lf Knum.\n",num,Knum);
	return 0;

}	

