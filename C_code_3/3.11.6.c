#include <stdio.h>
#define one_quart 950     /*预编译指令指定一夸脱含水的质量*/
#define one_water 3.0e-32 /*指定一个水分子含有水的质量*/
int main(void)
{
	float quart,quality;
	printf("请输入水的夸脱数: ");
	scanf("%f",&quart);
	quality = quart * (one_quart / one_water);// 夸脱数 *一夸脱水的数量 
	printf("%f夸脱的水中水分子的数量是: %f\n",quart,quality);
	
	return 0;
}	

