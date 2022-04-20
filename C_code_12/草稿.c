#include <stdio.h>
#include <string.h>
char* get_words(char* out);
#define SIZE 10
int main(void)
{
    char text[SIZE];
    puts("Start:");
    get_words(text);
    puts("The string your input:");
    puts(text);
    
    return 0;
}
char* get_words(char* out){
    char input[SIZE];
    char* in=input;

    puts("Enter a string:");
    fgets(input,SIZE,stdin);

    while ((*in=='\n' ||*in=='\t'||*in==' ') && *in!='\0')
        in++;
    while (*in!='\n' &&*in!='\t'&&*in!=' ' && *in!='\0'){
        *out++=*in++;
    }
    
    return out;
}