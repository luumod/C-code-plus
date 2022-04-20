#include <stdio.h>
#define SIZE 10
int main(void){
	char words[SIZE];
	int i;
	
	printf("Enter string:(empty ling to quit)\n");
	while (fgets(words,SIZE,stdin)!=NULL &&words[i]!='\0'){
		i=0;
		while (words[i]!='\n'&&words[i]!='\0')
			i++;
		if (words[i]=='\n')
			words[i]='\0';
		else 
			while (getchar()!='\n')
				continue;
		puts(words);
	}
	puts("Done!\n");
	return 0;
}

