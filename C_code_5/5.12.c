// -- 的测试
#include <stdio.h>
#define MAX 100
int main(void)
{
	int count =MAX + 1;

	while (--count > 0)	/*--在前面 ，先减再比较 反之相反*/
	{
		printf("%d botters of spring water on the wall,"
			"%d bottles of spring water!\n",count,count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water!\n",count-1);
	}
	return 0;
}	
