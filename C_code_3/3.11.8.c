#include <stdio.h>
#define pint 0.5
#define gus 8
#define tans 16
#define chab 48
int main(void)
{
	float num;
	printf("请输入杯数: ");
	scanf("%f",&num);

	printf("one num = %f pint\n",pint * num);
	printf("one num = %f gus\n",gus * num);
	printf("one num = %f tans\n",tans * num);
	printf("one num = %f chab\n",chab * num);

	return 0;
}

