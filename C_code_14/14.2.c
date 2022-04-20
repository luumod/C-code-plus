#include <stdio.h>
#include <string.h>
#define MAXTITLE 40
#define MAXAUTHOR 40
#define MAXBOOK 16 //最大书籍
char *s_gets(char *str, int n);
struct book
{
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};
int main(void)
{
    struct book library[MAXBOOK]; // book类型结构的数组
    int count = 0;
    int index;

    printf("Please enter the book title:.\n");
    printf("please enter the start of a line to stop.\n");
    while (count < MAXBOOK && s_gets(library[count].title, MAXTITLE) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTHOR);

        printf("Now enter the value.\n");
        scanf("%f", &library[count].value);
        count++;
        //清除换行符，用作输入结束，
        while (getchar() != '\n')
            continue;
        //继续添加书籍
        if (count < MAXBOOK)
        {
            printf("Enter the next title:\n");
        }
    }

    if (count > 0)
    {
        printf("Here are the list of your books:\n");
        for (index = 0; index < count; index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title,
                library[index].author, library[index].value);
        }
    }
    //如果count<0说明没有数据
    else
    {
        printf("No books? Too bad.\n");
    }
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
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}