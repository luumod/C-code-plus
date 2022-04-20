//在文件中保存结构中的内容
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITLE 40
#define MAXAUTHOR 40
#define MAXBOOKS 10 //最大书籍数量
char *s_gets(char *str, int n);
struct book
{
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
    int delect_flag;//标记删除成员
};
int main(void)
{
    //创建结构数组
    struct book library[MAXBOOKS];
    int count = 0;
    int index, filecount;
    FILE *fp; //文件指针
    int size=sizeof(struct book);   //待拷贝数据的大小
    //打开文件
    if ((fp = fopen("book.dat", "a+")) == NULL)
    {
        fprintf(stderr, "Cann't open book.dat.\n");
        exit(1);
    }
    //定位到文件开始处
    rewind(fp);
    while (count<MAXBOOKS && fread(&library[count],size,1,fp)==1){
        if (count==0){
            puts("Current contents of book.dat:");
        }
        printf("%s by %s:$%.2f\n",library[count].title,library[count].author,
        library[count].value);
        count++;
    }
    filecount=count;
    if (count==MAXBOOKS){
        fputs("The book.dat file is full.",stderr);
        exit(2);
    }
    char delect;
    printf("Do you want to modefy library? (y/n):");
    scanf("%c",&delect);
    if (delect=='y'){
        for (int i=0; i<count; i++){
            printf("%s by %s:%.2f\n",library[i].title,library[i].author,library[i].value);
            while (getchar()!='\n')
                continue;
            puts("Do you want to delect this book? (Y/N)");
            scanf("%c",&delect);
            if (delect=='y')
                library[i].delect_flag=1;
        }
    }
    while (getchar()!='\n')
        continue; 
    puts("Please add new book title.");
    puts("Press [enter] at the start of a line to stop.");
    while (count<MAXBOOKS && s_gets(library[count].title,MAXTITLE)!=NULL
        && library[count].title[0]!='\0' && library[count].delect_flag!=1){
            puts("Now enter the author.");
            s_gets(library[count].author,MAXAUTHOR);
            puts("Now enter the value.");
            scanf("%f",&library[count].value);
            library[count].delect_flag=0;
            count++;
            //清除输入行
            while (getchar()!='\n')
                continue;
            if (count<MAXBOOKS)
                puts("Enter the next title.");
        }
    //记录新信息覆盖被删除的信息
    rewind(fp); //到文件开始
    if (count>0){
        puts("Here is the list of your book:");
        for (index=0; index<MAXBOOKS; index++){
            if (library[index].delect_flag!=1){
                //保存数据时，忽略被删除的数据
                printf("%s by %s:$%.2f\n",library[index].title,
                    library[index].author,library[index].value);
                fwrite(&library[filecount],size,count-filecount,fp);
            }
        }
    }
    else{
        puts("No book? Too bad.");
    }
    puts("Bye!");
    fclose(fp);
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
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}