#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
#define ANSWER "GRANT"
void Toupper(char *str);
char *s_gets(char *str, int n);
int main(void)
{
    char ch[SIZE];

    printf("Who is buried in GRANT's tomb?\n");
    s_gets(ch, SIZE);
    Toupper(ch);
    
    while (strcmp(ch, ANSWER) != 0)
    { //在ch中查找ANSWER指定字符串，不相等为1/-1
        puts("No,that's wrong.");
        s_gets(ch, SIZE);
        Toupper(ch);
    }
    return 0;
}
void Toupper(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}
char *s_gets(char *str, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        find = strchr(str, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
