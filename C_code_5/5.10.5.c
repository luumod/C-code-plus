/* 秒数转换的另一种写法 5.9*/
#include <stdio.h>
#define SEC 60
int main(int argc,char *argv[])
{
	int sec = 1,min,left;

	printf("This program converts seconds to minutes and");
	printf("seconds.\n");
	printf("Just enter the number of seconds.\n");
	printf("Enter 0 to end the program.\n");
	while (sec > 0)
	{
		scanf("%d",&sec);
		min = sec / SEC;
		left = sec % SEC;
		printf("%d sec is %d min,%d sec.\n",sec,min,left);
		printf("Next input?\n");
	}
	printf("Bye!\n");

	return 0;
}
