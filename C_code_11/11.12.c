#include <stdio.h>
#define DEF "I am a #define string"
int main(void){
	char str1[80]="An array was initialized to me.";
	const char *str2="A pointer was initialized to me.";
	 
	puts("I am an agrgument to quit.\n");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);   //str1 的第五个元素
	puts(str2+4);     //str2 的索引为4的元素开始

	return 0;
}
