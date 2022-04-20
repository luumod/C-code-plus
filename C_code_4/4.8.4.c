//厘米  
#include <stdio.h>
int main(void)
{
	float height;
	char name[40];

	printf("请输入姓名:");
	scanf("%s",name);
	printf("请输入身高:");
	scanf("%f厘米",&height);
	printf("%s,你有%.2f米高!",name,height/100);

	return 0;
}
