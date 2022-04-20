#include <stdio.h>
#define MSG "I am a student"
#define MAXENTER 81
int main(void){
	char words[MAXENTER]="I am a string in an array";
	const char *pt1="Someting is pointing at me";
	puts("Here are some string");	
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8]='p';
	puts(words);

	return 0;
}
