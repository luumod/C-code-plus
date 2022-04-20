#include <stdio.h>
void up_down(int a); //声明
int main(void)
{
	up_down(1);
	return 0;
}

void up_down(int a)
{
	printf("level %d :n location %p.\n",a,&a);
	if (a<4)
		up_down(a+1);
	printf("LEVEL %d :n location %p.\n",a,&a);
}
