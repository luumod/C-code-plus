#include <stdio.h>
int main(void)
{
	int num;
	int oushu=0,ousum=0,jishu=0,jisum=0;
	printf("请输入整数:(输入0退出)\n");
	while (scanf("%d",&num))
	{
		if (num==0)
			break;
		if (num%2==0)
		{
			oushu++;
			ousum+=num;
		}
		else 
		{
			jishu++;
			jisum+=num;
		}	
	}
	printf("偶数个数:%d,偶数平均值:%d\n",oushu,ousum/oushu);
	printf("奇数个数:%d,奇数平均值:%d\n",jishu,jisum/jishu);
	return 0;
}
