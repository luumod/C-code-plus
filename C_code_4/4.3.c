//%zd 的形式
#include <stdio.h>
#include <string.h>
#define ASD "You adwd ddaw ffawf dawd "
int main(void)
{
	char name[40];
	
	printf("What is your name?\n");
	scanf("%s",name);
	printf("Hello,%s %s\n",name,ASD);
	printf("Your name of %zd letters occuipis %zd memory cells.\n",
			strlen(name),sizeof(name));
	printf("The phrase of praise has %zd letters",strlen(ASD));
	printf("and occuipies %zd memory cells.\n",sizeof(ASD));

	return 0;
}
