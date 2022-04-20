/*  pizza.c 批萨*/
#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area,circum,radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area = PI * radius *radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza paramaters are as follower:\n");
	printf("circumference = %.2f,area = %.2f\n",circum,area);

	return 0;
}
