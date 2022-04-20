#include <stdio.h>
int main(void)
{
	float a;
	printf("Enter a floating-point value: ");
	scanf("%f",&a);
	printf("\nfixed-point notation: %f",a);
	printf("\nexponential notation: %e",a);
	printf("\np notation: %a\n",a);

	return 0;
}
