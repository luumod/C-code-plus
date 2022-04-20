#include <stdio.h>
#define YCHI 30.48
#define YCUN 2.54
int main(void)
{
	float height,Ycun;
	int Ychi;
	
	printf("PLease enter your height:");
	scanf("%f",&height);

	while (height > 0)
	{
		Ychi = height /YCHI;
		Ycun = (height-YCHI*Ychi) / YCUN;
		printf("%.1f cm = %d Ychi,%.1f Ycun.\n",
		     height,Ychi,Ycun);
		printf("PLease enter your height:");
		scanf("%f",&height);
	}
	printf("Bye!\n");
	return 0;
}

