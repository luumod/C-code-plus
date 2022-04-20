#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMESIZE 20
#define XX 10
#define SIZE 5
#define CHOICE 256
#define INPUT 256

static char choice[CHOICE]; //外部静态变量
static int cho;
static int fg = 1;
//创建结构体
struct info
{
    char name[NAMESIZE];
    char xingbie[XX];
    int age;
    int math_score;
    int all_score;
};


struct info student[SIZE]= {
    {"张三", "女", 18, 97, 525},
    {"李四", "女", 19, 99, 620},
    {"王吉虎", "男", 20, 80, 490},
    {"赵六", "男", 21, 65, 560},
    {"刘八", "男", 21, 90, 530}};
// void menu(void);
int show_student(struct info *);
int show_one(struct info *);
int sex(struct info *);
void change(struct info *); //修改学生信息
char *s_gets(char *str, int n);
int append(struct info *, FILE *word); //添加结构内容到文件
int people(struct info*);        //增加新的学生学生信息
void quit(void);                        //程序退出
int main(void)
{
    //创建结构体变量

    struct info *sid; //创建指针
    FILE *fp;         //文件指针
    do
    {
        printf("\n");
        printf("欢迎进入学生信息管理系统\n");
        int choice;
        printf("=========================================================\n");
        printf("1.查看所有学生信息.          2.查找指定的学生.\n");
        printf("3.查看所有女学生或者男学生.    4.查看所有学生的数学成绩.\n");
        printf("5.把学生信息添加到文件        6.退出程序\n");
        /*printf("7.添加新的学生信息          \n");*/
        printf("=========================================================\n");
        printf("您的选择: ");
        scanf("%d", &choice);
        //跳过空行
        while (getchar() != '\n')
        {
            continue;
        }
        switch (choice)
        {
        case 1:
            //显示所有学生信息
            fg = show_student(student);
            break;
        case 2:
            //查找某个学生
            fg = show_one(&student[0]);
            break;
        case 3:
            //按性别查找学生
            fg = sex(&student[0]);
            break;
        // case 4:
        case 5:
            //把学生信息添加到文件
            fg=append(student,fp);
            break;
        case 6:
            //退出程序
            fg=0;
        /*case 7:
            //添加新学生
            fg=people(student);
            break;*/
        default:
            fg = 0, printf("没有这个选项\n");
            break;
        }
    } while (fg != 0); //当选择5时，程序退出
    quit();            //退出程序

    return 0;
}
int show_student(struct info *pst)
{
    //打印五个学生的信息
    int count = 0;
    char ch[CHOICE];
    printf("\n");
    // char choice[CHOICE];
    printf("所有学生的信息:\n");
    //传递数组名，递增显示学生列表
    for (int i = 0; i < SIZE; i++)
    {
        printf("姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d\n", pst[i].name,
               pst[i].xingbie, pst[i].age, pst[i].math_score, pst[i].all_score);
    }
    printf("\n");

    printf("返回菜单吗? y/n\n");
    s_gets(choice, CHOICE);
    //利用返回值给主调函数,进而控制退出
    if (choice[0] == 'y')
    {
        return fg = 1;
    }
    else if (choice[0] == 'n')
    {
        return fg = 0;
    }
    else
    {
        printf("输入无效,退出程序,谢谢你的使用.\n");
        return fg = 0;
    }
}
int show_one(struct info *pst)
{
    int a;
    int flag;
    //查找某个学生的信息
    printf("\n");
    // pst=(struct info*) malloc(256*sizeof(struct info));
    do
    {
        // printf("1.张三,2.李四,3.王五,4.赵六,5.刘八,0.返回菜单.\n");
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d.%s  ", i + 1, pst->name);
            pst++;
        }
        pst -= 5;
        printf("0.返回菜单\n");
        printf("你想要查找哪个小可爱?");
        printf("\n");
        scanf("%d", &a);
        //跳过空行
        while (getchar() != '\n')
            continue;
        switch (a)
        {
        case 1:
            printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n\n",
                   pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
            printf("输入回车继续: ");
            if (getchar() == '\n')
            {
                printf("需要修改学生信息吗?  y/n(返回菜单)");
                if (getchar() == 'y')
                    change(&student[0]);
            }
            break;
        case 2:
            pst += 1;
            printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n\n",
                   pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
            pst -= 1;
            printf("输入回车继续: ");
            if (getchar() == '\n')
            {
                printf("需要修改学生信息吗?  y/n(返回菜单)");
                if (getchar() == 'y')
                    change(&student[1]);
            }
            break;
        case 3:
            pst += 2, printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n\n",
                             pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
            pst -= 2;
            printf("输入回车继续: ");
            if (getchar() == '\n')
            {
                printf("需要修改学生信息吗?  y/n(返回菜单)");
                if (getchar() == 'y')
                    change(&student[2]);
            }
            break;
        case 4:
            pst += 3, printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n\n",
                             pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
            pst -= 3;
            printf("输入回车继续: ");
            if (getchar() == '\n')
            {
                printf("需要修改学生信息吗?  y/n(返回菜单)");
                if (getchar() == 'y')
                    change(&student[3]);
            }
            break;
        case 5:
            pst += 4, printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n\n",
                             pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
            pst -= 4;
            printf("输入回车继续: ");
            if (getchar() == '\n')
            {
                printf("需要修改学生信息吗?  y/n(返回菜单)");
                if (getchar() == 'y')
                    change(&student[4]);
            }
            break;
        case 0:
            flag = 0;
            break;
        default:
            printf("抱歉，没有找到这个小可爱\n");
            printf("你要重新输入吗? y/n \n");
            s_gets(choice, CHOICE);
            if (choice[0] == 'y')
            {
                flag = 1;
            }
            else if (choice[0] == 'n')
            {
                flag = 0; //中断do while循环
            }
            else
            {
                printf("输入无效,帮您退回菜单.\n");
                return fg = 1; //传给主调函数,控制程序退出
            }
            break;
        }
    } while (flag != 0);
    // free(pst);
    printf("返回菜单吗? y/n\n");
    s_gets(choice, CHOICE);
    //利用返回值给主调函数,进而控制退出
    if (choice[0] == 'y')
    {
        return fg = 1;
    }
    else if (choice[0] == 'n')
    {
        return fg = 0;
    }
    else
    {
        printf("输入无效,退出程序,谢谢你的使用.\n");
        return fg = 0;
    }
}
int sex(struct info *pst)
{
    int flag;
    printf("显示男生或者女生的信息:\n");
    printf("你想要查找男生还是女生 1/2  0.返回菜单\n");
    scanf("%d", &cho);
    while (getchar() != '\n')
        continue;
    do
    {
        switch (cho)
        {
        case 1:
            printf("所有男生的信息:   \n");
            for (int i = 0; i < SIZE; i++)
            {
                //通过strcmp查找字符,并且pst递增实现
                if (strcmp(pst->xingbie, "男") == 0)
                {
                    printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n",
                           pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
                }
                pst += 1;
            }
            pst -= 4;
            flag = 0;
            break;
        case 2:
            printf("所有女生的信息:   \n");
            for (int i = 0; i < SIZE; i++)
            {
                pst += i;
                if (strcmp(pst->xingbie, "女") == 0)
                {
                    printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n",
                           pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
                }
            }
            flag = 0;
            break;
        case 3:
            printf("你输入的是外星人吗?\n");
            break;
        case 0:
            flag = 0;
            break;
        default:
            printf("你的输入无效哦");
            printf("你要重新输入吗? y/n \n");
            s_gets(choice, CHOICE);
            if (choice[0] == 'y')
            {
                flag = 1;
            }
            else if (choice[0] == 'n')
            {
                flag = 0; //中断do while循环
            }
            else
            {
                printf("输入无效,帮您退回菜单.\n");
                return fg = 1; //传给主调函数,控制程序退出
            }
            break;
        }
    } while (flag != 0);
    //结束do while
    printf("返回菜单吗? y/n\n");
    s_gets(choice, CHOICE);
    //利用返回值给主调函数,进而控制退出
    if (choice[0] == 'y')
    {
        return fg = 1;
    }
    else if (choice[0] == 'n')
    {
        return fg = 0;
    }
    else
    {
        printf("输入无效,退出程序,谢谢你的使用.\n");
        return fg = 0;
    }
}
void change(struct info *pst)
{
    //修改学生的信息
    char temp[INPUT];
    int choice2;
    static int age; //块作用域
    static int math_score;
    static int all_score;
    printf("\n");
    printf("**********修改%s信息***********\n", pst->name);
    printf("1.姓名  2.性别  3.年龄  4.数学成绩  5.总成绩  0.返回菜单\n");
    printf("\n你想修改 %s 的那一项信息:", pst->name);
    scanf("%d", &choice2);
    switch (choice2)
    {
    case 1:
        printf("姓名:");
        scanf("%s", temp);
        strcpy(pst->name, temp);
        printf("姓名修改已完成\n");
        break;
    case 2:
        printf("性别:");
        scanf("%s", temp);
        strcpy(pst->xingbie, temp);
        printf("性别修改已完成\n");
        break;
    case 3:
        printf("年龄:");
        scanf("%d", &age);
        pst->age = age;
        printf("年龄修改已完成\n");
        break;
    case 4:
        printf("数学成绩:");
        scanf("%d", &math_score);
        pst->math_score = math_score;
        printf("数学成绩修改已完成\n");
        break;
    case 5:
        printf("总成绩:");
        scanf("%d", &all_score);
        pst->all_score = all_score;
        printf("总成绩修改已完成\n");
        break;

    case 0:
        printf("返回菜单\n");
        break; //待学习

    default:
        printf("输入无效.\n");
        break;
    }
}
int append(struct info *pst, FILE *word)
{
    //写入文件及格式控制
    int index;
    //格式控制
    char spacechar[256] = "  ";
    char spacenum[256] = "     ";
    if ((word = fopen("学生信息", "w+")) == NULL)
    {
        fprintf(stderr, "不能打开这个文件\n");
        exit(EXIT_FAILURE);
    }
    fputs("姓名:    ", word);
    for (index = 0; index < SIZE; index++)
    {
        fprintf(word, "%s\t", pst[index].name);
    }
    fputs("\n", word);

    fputs("性别:    ", word);
    for (index = 0; index < SIZE; index++)
    {
        fprintf(word, "%s\t\t", pst[index].xingbie);
    }
    fputs("\n", word);

    fputs("年龄:    ", word);
    for (index = 0; index < SIZE; index++)
    {
        fprintf(word, "%d\t\t", pst[index].age);
        // fputs(spacenum,word);
    }
    fputs("\n", word);

    fputs("数学成绩:", word);
    for (index = 0; index < SIZE; index++)
    {
        fprintf(word, "%d\t\t", pst[index].math_score);
    }
    fputs("\n", word);

    fputs("总成绩:  ", word);
    for (index = 0; index < SIZE; index++)
    {
        fprintf(word, "%d\t\t", pst[index].all_score);
    }
    fputs("\n", word);
    fclose(word);
    printf("写入文件成功,共计添加%d个学生,文件名:学生信息",SIZE);
    return fg=0;
}


/*int people(struct info* pst){
    printf("要添加");
    puts("请输入新学生的姓名:");
    scanf("%s",pst->name);
    puts("请输入新学生的性别:");
    scanf("%s",pst->xingbie);
    puts("请输入新学生的年龄:");
    scanf("%d",&pst->age);
    puts("请输入新学生的数学成绩:");
    scanf("%d",&pst->math_score);
    puts("请输入新学生的总成绩:");
    scanf("%d",&pst->all_score);
    printf("学生信息添加完成");
    printf("\n姓名:%s  性别:%s  年龄:%d  数学成绩:%d  总成绩:%d \n\n",
                            pst->name, pst->xingbie, pst->age, pst->math_score, pst->all_score);
    return fg=0;
}*/


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
            while (getchar() != EOF)
                continue;
        }
    }
    return ret_val;
}
void quit(void)
{
    printf("程序已退出，谢谢你的操作.\n");
}
