#include <stdio.h>
#define TIME 60  /*一小时60分钟*/
int main(void)
{
	int min,sec,hour;
	printf("Now,enter a mintues:\n");
	
	while (min > 0)
	{
		scanf("%d",&min);/* 输入分钟*/
		hour = min / TIME;
		sec = min % TIME;
		printf("%d mintues is %d hour and %d min.\n",
				min,hour,sec);
		printf("Plaese enter next mintues:\n");
	}
	printf("Bye!\n");
}


