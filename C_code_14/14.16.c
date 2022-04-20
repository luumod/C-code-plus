//使用函数指针
/*
1. void show(void(*fp)(char* ),char* str);     //声明函数原型
2. void (*fpun)(char* );            //创建一个函数指针
3. fpun = 一个函数名                  //传递函数地址给那个指针
4.(*fpun)(str);                     //把函数作用于str*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char* s_gets(char* str,int n);
char showmenu(void);    //显示菜单
void eatline(void);     //读取到函数行末尾
void show(void(*fp)(char*),char* str);
void Toupper(char* );   //把字符串转换成大写
void Tolower(char* );   //把字符串转换为小写
void Trans(char* );     //大小写转置
void Dummy(char* );     //不更改字符串

int main(void){
    char line[LEN];
    char copy[LEN];
    char choice;
    //声明一个函数指针，被指向的函数接受char类型的参数，无返回值
    void (*pfun)(char* );

    puts("Enter a string(empty to quit):");
    while (s_gets(line,LEN)!=NULL && line[0]!='\0'){
        while ((choice=showmenu())!='n'){   //用户输入n时退出
            switch(choice){
                //传递函数地址给函数指针
                case 'u':pfun=Toupper;break;
                case 'l':pfun=Tolower;break;
                case 't':pfun=Trans;break;
                case 'o':pfun=Dummy;break;
            }
            strcpy(copy,line);      //为show函数拷贝一份
            show(pfun,copy);    //使用选定的函数
        }
        puts("Enter a string (empty to quit):");
    } 
    puts("Bye!");

    return 0;
}
char showmenu(void){
    char ans;
    puts("Enter menu choice:");
    puts("u.Uppercase      l.lowercase.");
    puts("t.transcase      o.originalcase.");
    puts("n. next string.");
    ans=getchar();  //获取用户的输入
    //用户输入小写大写都可以
    ans=tolower(ans);       //转换为小写
    //清除输入行
    eatline();   
    while (strchr("ulton",ans)==NULL){
        puts("Please enter a u,l,t,o, or n.");
        ans=tolower(getchar());
        eatline();
    }
    return ans;
}
void eatline(void){
    //清除输入行函数
    while (getchar()!='\n')
        continue;
}
void Toupper(char* str){
    //把字符串转换为大写
    while (*str){
        *str=toupper(*str);
        str++;
    }
}
void Tolower(char* str){
    //把字符串转换为小写
    while (*str){
        *str=tolower(*str);
        str++;
    }
}
void Trans(char* str){
    //大小写转换
    while (*str){
        if (islower(*str))
            *str=toupper(*str);
        else if (isupper(*str))
            *str=tolower(*str);
        str++;
    }
}
void Dummy(char* str){
    //不改变字符串
}
void show(void (*fp)(char*),char* str){
    (*fp)(str);     //把用户选定的函数作用于str
    puts(str);
}
char* s_gets(char* str,int n){
    char* ret_val;
    char* find;
    ret_val=fgets(str,LEN,stdin);
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