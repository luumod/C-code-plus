#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age;
	char name[40];
	int xp;

	printf("Please enter your first name:");
	scanf("%s",name);
	printf("All right,%s, what is your age?\n",name);
	scanf("%d",&age);
	xp = X + age;
	printf("That is a %s! You must be at least %d.\n",B,xp);
	return 0;
}
