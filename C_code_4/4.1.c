//演示与用户交互
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[40];   /*可容纳40个字符的数组*/

	printf("Hi! What is your name?\n");
	scanf("%s",name);  /*没有&符号*/
	printf("%s,what is your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,your volume is %2.2f cubic feet.\n",
			name,volume);
	printf("Also,your first name has %d letters,\n",
			letters);
	printf("and we have %d bytes to store it.\n",size);

	return 0;
}



