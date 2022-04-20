#include <stdio.h>
double power(double n,int p);  //n的p次幂
int main(void)
{
        double x,xpow;
        int exp;
        printf("输入数字及几次幂:");
        while (scanf("%lf %d",&x,&exp)==2)
        {
                xpow=power(x,exp);
                printf("%lf 的 %d 次幂是 %lf\n",x,exp,xpow);
                printf("请输入数字及幂数:\n");
        }
        printf("Bye!\n");
        return 0;
}

double power(double n,int p)
{
        double pow=1;
        int i;
	if (n==0)
		return 0;
	if (p=0)
		return 1;
	if (p>0)
	{
		for (i=1; i<=p; i++)
			pow*=n;
		return pow;
	}
	else
	{
		for (i=1; i<=-p i++)
			pow*=n;
		return pow;
	}
}
                                                          1,18         顶端
