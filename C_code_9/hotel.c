//创建各种函数的定义

#include <stdio.h>
#include "hotel.h"

int menu()
{
	int code,status;   //code 为你选择的选项
        printf("\n%s%s\n",STARS,STARS);
        printf("Enter the your choice:\n");
        printf("1.Fairfied Arms            2.Hotel Olympic\n");
        printf("3.Chertworthy Playa        4.The Stockon\n");
        printf("5.QUIT\n");
        printf("%s%s\n",STARS,STARS);
	while ((status=scanf("%d",&code))!=1 ||(code<1||code>5))   //判断输入的不是整数或者超出范围
	{
		if (status!=1)
			scanf("%*s");  //处理非整数输入
		printf("Enter a number from 1 to 5:\n");
	}
	return code;
}

int get_nights(void)
{
	int nights;
	printf("How many days are need?\n");
	while (scanf("%d",&nights)!=1)
	{
		scanf("%*s");  //处理非整数输入
		printf("Please enter a number,such as 1.2..\n");
	}
	return nights;
}

void showprice(double rate,int nights)
{
	int n;
	double total=0.0;
	double factor=1.0;
	for (n=1; n<=nights;n++,factor*=DISCOUNT)   //1*0.95*0.95.0.95 .....
		total +=rate*factor;
	printf("The total cost will be %.2f.\n",total);
}


