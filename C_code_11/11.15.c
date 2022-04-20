#include <stdio.h>
void put1(const char *string);
int put2(const char *);
int main(void){
	put1("If I would much money.");
	put1("as I could spend,\n");
	printf("I could %d characters.\n",put2("I never would cry old chairs to mend."));


	return 0;
}
void put1(const char *string){
	while (*string)    //输入的字符串不等于空字符NULL，为TRUE
		putchar(*string++);
}
int put2(const char *string){
	int count=0;
	while (*string){
		putchar(*string++);
		count++;
	}
	putchar('\n');
	return count;
}
