#include <stdio.h>
int dates[2]={100,200};
int mods[2]={300,400};
int main(void){   //指针运算优先级
	int *p1,*p2,*p3;

	p1=p2=dates;
	p3=mods;

	printf("*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
	printf("*(p1++)=%d,*(++p2)=%d,*(p3)++=%d\n",*(p1++),
			*(++p2),*(p3)++);
	printf("*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);

	return 0;
}

