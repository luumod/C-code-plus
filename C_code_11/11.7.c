#include <stdio.h>  //使用fgets()和fputs()
#define STLEN 14
int main(void){
	char words[STLEN];

	puts("Enter a string,please.");
	fgets(words,STLEN,stdin);  //数组，长度，存储
	printf("Your string twice(puts(),then fputs()):\n");
	puts(words);
	fputs(words,stdout);
	puts("Enter another string,please.\n");
	fgets(words,STLEN,stdin);
	printf("Your string twice(puts(),then fputs()):\n");
	puts(words);
	fputs(words,stdout);
	puts("Done!");

	return 0;
}
