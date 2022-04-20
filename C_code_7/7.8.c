#include <stdio.h>
#define COVENT 350   //每桶油漆可以刷的面积
int main(void)
{
	int cans;  //桶数
	int sq_feet;  //给定的平方英尺

	printf("请输入平方英尺数:");
	while (scanf("%d",&sq_feet)==1)
	{
		cans =sq_feet/COVENT;
		cans +=(sq_feet%COVENT==0)? 0 : 1;

		printf("你需要%d%s油漆来刷%d平方英尺的墙\n",cans,
				cans==1?"can":"cans",sq_feet);
		printf("输入q退出\n");
	}
	printf("Bye!\n");
}
