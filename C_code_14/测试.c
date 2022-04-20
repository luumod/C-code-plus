#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CHARSIZE 5
struct info
{
    char name[20];
    char xingbie[20];
    int age;
    /*int math_score;
    int all_score;*/
};
char *s_gets(char *str, int n);
int main(void)
{
    struct info  student[CHARSIZE];
    struct info* pst;
    pst=student;
    for (int i=0; i<CHARSIZE; i++){
        scanf("%d",&pst[i].age);   
        scanf("%s",pst[i].name);
        scanf("%s",pst[i].xingbie);      
    }
    int n;

    for (int i=0; i<CHARSIZE-1; i++){
        for (int j=i+1; j<CHARSIZE; j++){
            if (pst[i].age>pst[j].age){
                n=pst[i].age;
                pst[i].age=pst[j].age;
                pst[j].age=n;
        }
        }           
    }
    for (int i=0; i<5; i++){
        printf("%d  ",pst[i].age);
        printf("%s  ",pst[i].name);
        printf("%s  ",pst[i].xingbie);
        printf("\n\a");
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
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}