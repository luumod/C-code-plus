#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 80
#define CHARSIZE 256
static int quit=1;

//创建结构体
struct student{
    char name[CHARSIZE];
    char sex[CHARSIZE];
    int age;
    double math_score;
    double chinese_score;
    double english_score;
    double all_score;
    int delect_flag;
};
//各种函数声明
int count(void);    //你想输入几个学生?
//char menu(void);    //菜单函数
int append(struct student*,int n);   //添加学生
int look(struct student*,int n);     //显示所有学生信息
int change(struct student*,int n);   //修改学生信息
int shut(struct student*,int n);   //删除学生信息
int show_sex(struct student*, int n);   //按性别显示
int show_age(struct student*, int n);        //年龄
int sort_chinese(struct student* ,int n);      //语文成绩排序
int sort_math(struct student* ,int n);      //数学成绩排序
int sort_english(struct student*,int n);      //英语成绩排序
int sort_total(struct student*, int n);     //总成绩排序

void sort(struct student * ,int n);

char* s_gets(char* str,int n);  //控制输入函数
void exit1(void);    //退出函数

int main(void){
    int cd3;
    char input;
    int cd2;
    int cd;     //记录学生数量
    
    //创建指向结构的指针
    struct student* info;
    //为结构体分配动态内存
    info=(struct student*) malloc(3*sizeof(struct student));
    puts("欢迎进入学生成绩管理系统,请初始化学生信息:");
    cd3=count();    //得到学生的数量
    //输入学生信息
    puts("==========初始化学生信息==========");
    puts("输入学生信息: ");
    //根据输入的个数分配内存
    info=(struct student*) malloc(cd3*sizeof(struct student));
    
    for (int i=0; i<cd3; i++){
        printf("输入第%d个学生的姓名: ",i+1);
        scanf("%s",info[i].name);
        printf("输入第%d个学生的性别: ",i+1);
        scanf("%s",info[i].sex);
        printf("输入第%d个学生的年龄: ",i+1);
        scanf("%d",&info[i].age);
        printf("输入第%d个学生的数学成绩: ",i+1);
        scanf("%lf",&info[i].math_score);
        printf("输入第%d个学生的语文成绩: ",i+1);
        scanf("%lf",&info[i].chinese_score);
        printf("输入第%d个学生的英语成绩: ",i+1);
        scanf("%lf",&info[i].english_score);
        while (getchar()!='\n')
            continue;
        printf("第%d个学生输入完成.\n",i+1);
        }   
    for (int i=0; i<cd3; i++){
        //计算学生总成绩
        info[i].all_score=info[i].math_score+info[i].chinese_score+info[i].english_score;
    }
    puts("\n*****学生信息采集完毕*****\n");


    do{
        puts("===================学生成绩管理系统============================");
        puts("a.添加学生信息.               b.查看所有学生信息.        ");
        puts("c.修改学生信息.               d.删除学生信息.            ");
        puts("e.将学生信息按性别排序         f.将学生信息按年龄排序。     ");
        puts("g. 将学生信息按语文成绩排序     h.将学生信息按数学成绩成绩排序");
        puts("i.将学生信息按英语成绩排序      j.将学生信息按总成绩排序    ");
        puts("q.退出程序                                          ");
        puts("============================================================");
        printf("您的选择是:\n");
        input=getchar();    //只读取第一个字符
        input=tolower(input);   //将输入转换为小写
        //清除剩余行
        while (getchar()!='\n')
            continue;
        while (strchr("abcdefghijq",input)==NULL){
            //没有找到你的输入
            puts("抱歉，请重新选择:");
            input=tolower(getchar());
            while (getchar()!='\n')
                continue;
        }
    switch(input){
        case 'a'://添加学生信息;
        quit=append(info,cd3);
        break;
        case 'b'://查看所有学生信息;
        cd2=cd;
        quit=look(info,cd3);
        break;
        case 'c'://修改学生信息;
        cd2=cd;
        quit=change(info,cd3);
        break;
        case 'd'://删除学生信息
        cd2=cd;
        quit=shut(info,cd3);
        break;
        case 'e'://将学生信息按性别
        cd2=cd;
        quit=show_sex(info,cd3);
        break;
        case 'f'://将学生信息按年龄排序
        cd2=cd;
        quit=show_age(info,cd3);
        break;
        case 'g'://将学生信息按语文成绩排序
        cd2=cd;
        quit=sort_chinese(info,cd3);
        break;
        case 'h'://将学生信息按数学成绩排序
        cd2=cd;
        quit=sort_math(info,cd3);
        break;
        case 'i'://将学生信息按英语成绩排序 
        cd2=cd;
        quit=sort_english(info,cd3);
        break;
        case 'j'://将学生信息按总成绩排序
        cd2=cd;
        quit=sort_total(info,cd3);
        break;
        case 'q':exit1();quit=0;
        break;
        }
    }while (input!=EOF && quit!=0);

    //释放内存
    free(info);
    return 0;
}

int count(void){

    int number;
    printf("请输入学生数量:");
    scanf("%d",&number);

    return number;
}
int append(struct student* pst,int n){
    //添加学生
    puts("==========添加学生==========");
    puts("输入学生信息: ");
    for (int i=0; i<n; i++){
        printf("输入第%d个学生的姓名: ",i+1);
        scanf("%s",pst[i].name);
        printf("输入第%d个学生的性别: ",i+1);
        scanf("%s",pst[i].sex);
        printf("输入第%d个学生的年龄: ",i+1);
        scanf("%d",&pst[i].age);
        printf("输入第%d个学生的数学成绩: ",i+1);
        scanf("%lf",&pst[i].math_score);
        printf("输入第%d个学生的语文成绩: ",i+1);
        scanf("%lf",&pst[i].chinese_score);
        printf("输入第%d个学生的英语成绩: ",i+1);
        scanf("%lf",&pst[i].english_score);
        printf("第%d个学生输入完成.\n",i+1);

        }
    
    for (int i=0; i<n; i++){
        //计算学生总成绩
        pst[i].all_score=pst[i].math_score+pst[i].chinese_score+pst[i].english_score;
    }
    puts("*****学生信息输入完毕*****\n");

    printf("按回车键返回菜单");
    while (getchar()=='\n')
        return quit=1;

}
//查看所有学生信息
int look(struct student* pst,int n){
    //显示所有学生信息
    puts("==========显示所有学生信息==========");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (int i=0; i<n; i++){
        if (pst[i].delect_flag!=1)
            printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
    }
    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;

}
//修改学生信息
int change(struct student* pst,int n){
    char name_2[CHARSIZE];
    //静态变量
    int fg=1;
    char input[CHARSIZE];
    static char name[CHARSIZE];
    static char sex[CHARSIZE];
    static int age;
    static double math_score;
    static double chinese_score;
    static double english_score;
    static double all_score;
    static int choice;
    //先显示全部学生信息
    printf("修改学生信息\n");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (int i=0; i<n; i++){
        if (pst[i].delect_flag!=1)
            printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
    }
    //在查找姓名，修改信息
    puts("请输入你要修改信息的学生姓名:");
    scanf("%s",name_2);
    while (getchar()!='\n')
        continue;
        int i=0;
    while (i<n){
        //字符串相等，返回零
        while (strcmp(pst[i].name,name_2)==0){
            puts("1.姓名\t2.性别\t3.年龄\t4.数学成绩\t5.语文成绩\t6.英语成绩\t7.总成绩");
            puts("你想要修改哪一项:");
            scanf("%d",&choice);
            do{
                switch(choice){
                    case 1:printf("修改姓名: ");
                    scanf("%s",name);
                    while (getchar()!='\n')
                    continue;
                    strcpy(pst[i].name,name);
                    break;
                    case 2:printf("修改性别: ");
                    scanf("%s",sex);
                    while (getchar()!='\n')
                    continue;
                    strcpy(pst[i].sex,sex);
                    break;
                    case 3:printf("修改年龄: ");
                    scanf("%d",&age);
                    while (getchar()!='\n')
                    continue;
                    pst[i].age=age;
                    break;
                    case 4:printf("修改数学成绩: ");
                    scanf("%lf",&math_score);
                    while (getchar()!='\n')
                    continue;
                    pst[i].math_score=math_score;
                    break;
                    case 5:printf("修改语文成绩: ");
                    scanf("%lf",&chinese_score);
                    while (getchar()!='\n')
                    continue;
                    pst[i].chinese_score=chinese_score;
                    break;
                    case 6:printf("修改英语成绩: ");
                    scanf("%lf",&english_score);
                    while (getchar()!='\n')
                    continue;
                    pst[i].english_score=english_score;
                    break;
                    case 0:printf("返回菜单.");
                    return quit=1;
                    break;
                    default:printf("输入无效,按回车返回上一级:");break;
                    
                }
                pst[i].all_score=pst[i].math_score+pst[i].chinese_score+pst[i].english_score;
                printf("更新数据成功\n");
                //控制继续输入信息
                puts("是否继续更改信息?  y/n ");
                s_gets(input,CHARSIZE);
                input[0]=tolower(input[0]); 
                while (input[0]!='y' && input[0]!='n'){
                //没有找到你的输入               
                    puts("抱歉，请重新输入: y/n");
                    s_gets(input,CHARSIZE);
                    input[0]=tolower(input[0]);   
                }
                
                if (input[0]=='y'){
                        puts("1.姓名\t2.性别\t3.年龄\t4.数学成绩\t5.语文成绩\t6.英语成绩\t7.总成绩");
                        puts("你想要修改哪一项:");
                        scanf("%d",&choice);
                        fg=1;

                }
                else if (input[0]=='N' || input[0]=='n'){
                    puts("返回菜单.");
                    fg=0;
                    return quit=1;
                }

            }while (choice!=EOF && fg==1);

        }
        i++;
    }
    puts("修改已完成.");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;
}
//删除学生信息
int shut(struct student* pst,int n){
    //删除指定学生信息
    static char choice[CHARSIZE];
    static char name[CHARSIZE];
    puts("==========删除学生信息==========");
    printf("请输入要删除的学生姓名:\n");
    scanf("%s",name);
    while (getchar()!='\n')
        continue;
    for (int i=0; i<n; i++){
        if (strcmp(pst[i].name,name)==0){
            //找到名字
            printf("你确定要删除%s的所有信息吗?  y/n ",pst[i].name);
            s_gets(choice,CHARSIZE);
            if (choice[0]=='y'){
                printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,
                    pst[i].age,pst[i].math_score,
                    pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
                puts("信息已删除.");
                pst[i].delect_flag=0;
                /*for (int j=0; j<CHARSIZE; j++){
                    //删除名字
                    pst[i].name[j]='\0';
                    pst[i].sex[j]='\0';
                }
                pst[i].age='\0';
                pst[i].math_score='\0';
                pst[i].chinese_score='\0';
                pst[i].english_score='\0';
                pst[i].all_score='\0';*/
            }    
            else{
                puts("返回菜单.");
                return quit=1;
            }    
        }
        else{
            puts("未找到学生信息,即将返回菜单.");
            return quit=1;
        }
    }
    puts("删除已完成.");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;
}
//性别排序
int show_sex(struct student* pst, int n){
    
    static char choice[CHARSIZE];
    static int num;
    static int age;

    puts("===========================排序操作==================================");
    printf("1. 将学生按性别排序");
    puts("你的选择:");
    scanf("%d",&num);
    while (getchar()!='\n')
        continue;
    switch(num){
        case 1:puts("===========================性别===========================");
            puts("男生:");
            printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
            for (int i=0; i<n; i++){
                if (strcmp(pst[i].sex,"男")==0 && pst[i].delect_flag!=1){
                    //待查找的是男生
                    printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
                        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
            }
                }
            
            puts("女生:");
            printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
            for (int i=0; i<n; i++){
                if (strcmp(pst[i].sex,"女")==0 && pst[i].delect_flag!=1){
                    //待查找的是女生
                    printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
                        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
                }
            }
            puts("人妖:");
            printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
            for (int i=0; i<n; i++){
                if (strcmp(pst[i].sex,"男")!=0 && strcmp(pst[i].sex,"女")!=0 && pst[i].delect_flag!=1){
                    //待查找的不男不女
                    printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
                        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
                }
            }
            break;
        default:puts("返回菜单.");
            return quit=1;
    }
    puts("排序已完成.");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;
}
//年龄排序
int show_age(struct student* pst, int n){
    //按年龄排序
    static char choice[CHARSIZE];
    struct student age;
    int i,j;
    //年龄从大到小
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (pst[i].age<pst[j].age){
                age=pst[i];
                pst[i]=pst[j];
                pst[j]=age;               
            }
        }
    }
    puts("===========================年龄排序===============================");
    puts("年龄从大到小:");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (i=0; i<n; i++){
        if (pst[i].delect_flag!=1)
            printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
    }
    puts("=================================================================");
    puts("按年龄排序已完成.");
    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;
    
}
//语文成绩排序
int sort_chinese(struct student* pst,int n){
    double* number[n];
    int i,j;
    double* temp;
    //struct student chinese_score;

    for (int index=0; index<n; index++){
        number[index]=&pst[index].chinese_score;
    }
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n; j++){
            if (*number[i]<*number[j]){
                //从大到小
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
    puts("========================语文成绩排序===========================");
    puts("语文成绩从大到小:");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (*number[i]==pst[j].chinese_score){
                printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
                    pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
            }
        }
    }
    puts("============================================================");
    puts("语文成绩排序已完成");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;
    
}
//数学成绩排序
int sort_math(struct student* pst,int n){
    int i,j;
    struct student math_score;
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (pst[i].math_score<pst[j].math_score){
                math_score=pst[i];
                pst[i]=pst[j];
                pst[i]=math_score;
            }           
        }
    }
    
    puts("========================数学成绩排序===========================");
    puts("数学成绩从大到小:");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (i=0; i<n; i++){
        printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
    }
    puts("============================================================");
    puts("数学成绩排序已完成");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;

}
//英语成绩排序
int sort_english(struct student* pst,int n){
    int i,j;
    struct student english_score;
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (pst[i].english_score<pst[i].english_score){
                english_score=pst[i];
                pst[i]=pst[j];
                pst[i]=english_score;
            }           
        }
    }
    
    puts("========================英语成绩排序===========================");
    puts("英语成绩从大到小:");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (i=0; i<n; i++){
        printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
    }
    puts("============================================================");
    puts("英语成绩排序已完成");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;

}   
//总成绩排序  
int sort_total(struct student* pst, int n){
    int i,j;
    struct student all_score;
    for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++){
            if (pst[i].all_score<pst[i].all_score){
                all_score=pst[i];
                pst[i]=pst[j];
                pst[i]=all_score;
            }           
        }
    }
    
    puts("========================总成绩排序===========================");
    puts("总成绩从大到小:");
    printf("姓名\t性别\t年龄\t数学成绩\t语文成绩\t英语成绩\t总成绩\n");
    for (i=0; i<n; i++){
        printf("%s\t%s\t%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",pst[i].name,pst[i].sex,pst[i].age,pst[i].math_score,
        pst[i].chinese_score,pst[i].english_score,pst[i].all_score);
    }
    puts("============================================================");
    puts("总成绩排序已完成");

    printf("\n");
    puts("输入回车返回菜单:");
    while (getchar()=='\n')
        return quit=1;

}
char* s_gets(char* str,int n){
    char* ret_val;
    char* find;

    ret_val=fgets(str,n,stdin);
    if (ret_val){
        find=strchr(str,'\n');
        if (find){
            *find='\0';
        }
        else
            while (getchar()!='\n')
                continue;
    }
    return ret_val;
}
void exit1(void){
    puts("程序已退出,谢谢您的操作");
}