//利用枚举类型的值
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char *s_gets(char *str, int n);

//枚举声明
enum spectrum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet
};
const char *colors[] = {"red", "orange", "yellow", "green",
                    "blue", "violet"};

#define LEN 30
int main(void)
{
    char choice[LEN];
    enum spectrum color; //枚举变量
    bool fg = false;

    puts("Enter a color (empty to quit):");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
    {
        for (color = red; color <= violet; color++)
        {
            if (strcmp(choice, colors[color]) == 0)
            {
                fg = true;
                break;
            }
        }
        if (fg) // fg=true
            switch (color)
            {
            case red:
                puts("Roses are red.");
                break;
            case orange:
                puts("Poppies are orange.");
                break;
            case yellow:
                puts("Sunflowers are yellow.");
                break;
            case green:
                puts("Grass is green.");
                break;
            case blue:
                puts("Bluebells are blue.");
                break;
            case violet:
                puts("Violets are violets.");
                break;
            }
        else
            printf("I don't know about the color %s.\n", choice);
        color = false;
        puts("Next color,Please (empty to quit):");
    }
    puts("Good Bye!");

    return 0;
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
        {
            *find = '\0';
        }
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}