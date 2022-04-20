/*自动类型转换*/
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float f;

	f = i = ch ='C';
	printf("ch = %c,i = %d,f = %.2f\n",ch,i,f);
	ch =ch +1;
	i = f +ch *2;
	f = i +ch *2.0;
	printf("ch = %c,i = %d,f = %.2f\n",ch,i,f);
	ch = 110;
	printf("ch = %c\n",ch);
	ch = 87.06;
	printf("ch = %c\n",ch);

	return 0;
}
