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
void book_1(struct book*,int n);
void book_title(struct book*,int n);
void book_price(struct book*,int n);
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
        book_1(library,count);
        book_title(library,count);
        book_price(library,count);
    }
    //如果count<0说明没有数据
    else
    {
        printf("No books? Too bad.\n");
    }
    return 0;
}
void book_1(struct book* pst,int n){
    puts("原始顺序");
    for (int i=0; i<n; i++){
        printf("%s by %s:%.2f\n",pst[i].title,pst[i].author,pst[i].value);
    }

}
void book_title(struct book* pst,int n){
    //为了不改变原顺序,使用指针数组进行排序
    char* pt[n];
    char* temp;
    int top,seek;
    //为pt指针初始化值
    for (int index=0; index<n; index++)
        pt[index]=pst[index].title;
    for (top=0; top<n-1; top++){
        for (seek=top+1; seek<n; seek++){
            if (strcmp(pt[top],pt[seek])>0){
                //pt[top]在pt[seek]后面
                temp=pt[top];
                pt[top]=pt[seek];
                pt[seek]=temp;
            }
        }
    }
    //通过pst数组指向的title进行比较排序
    printf("这是按照你的书名排序的结果:\n");
    for (int index=0; index<n; index++){
        for (int i=0; i<n; i++){
            if (pt[index]==pst[i].title)
                //打印结果
                printf("%s by %s:%.2f\n",pst[i].title,pst[i].author,pst[i].value);
        }
    }


}
void book_price(struct book* pst,int n){
    //按照书的价格排序
    float* price[n];
    float* temp;
    int top,seek;
    for (int index=0; index<n; index++){
        price[index]=&pst[index].value;
    }
    for (int top=0; top<n-1; top++){
        for (int seek=top+1; seek<n; seek++){
            //从大到小
            if (*price[top]<*price[seek]){
                temp=price[top];
                price[top]=price[seek];
                price[seek]=temp;
            }
        }
    }
    printf("这是按照你的价格排序的结果:\n");
    for (int index=0; index<n; index++){
        for (int i=0; i<n; i++){
            if (*price[index]==pst[i].value)
                //打印结果
                printf("%s by %s:%.2f\n",pst[i].title,pst[i].author,pst[i].value);
        }
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