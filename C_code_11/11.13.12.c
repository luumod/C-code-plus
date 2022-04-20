#include <stdio.h>                  //查找各种类型的数量
#include <ctype.h>
#define SIZE 80
int words(char* str);
int upper(char* str);
int lower(char* str);
int other(char* str);
int number(char* str);
int main(void){
    char input[SIZE];
    int i=0;
    while ((input[i++]=getchar())!=EOF){      //ctrl+D停止
        if (i>=SIZE){
            printf("Over flowed.\n");
            break;
    }
    }
    printf("Your input ending.\n");
    printf("your input words:%d\n",words(input));
    printf("your input upper:%d\n",upper(input));
    printf("your input lower:%d\n",lower(input));
    printf("your input other:%d\n",other(input));
    printf("your input number:%d\n",number(input));
    return 0;
}
int words(char* str){           //统计单词的数量
    int count=0;
    int fg=0;           //初始为0，未开始

    while (*str!=EOF){
        if (isalpha(*str)==0 && fg==0){     //不是字母，且未开始
            str++;
        }
        else if (isalpha(*str)==0 && fg==1){       //不是字母,但已有计数
            fg=0;
            str++;
            count++;
        }
        else if (isalpha(*str)!=0){             //是字母
            fg=1;           //计数点
            str++;
        }
    }
    if (fg==1)                  //若只有一个字母
        count++;
    return count;
}
int upper(char* str){               //统计大写字母
    int count=0;
    while (*str!=EOF){
       if (isupper(*str++)!=0){   //不是大写字母
            count++;
        } 
    }
    return count;
}
int lower(char* str){               //统计小写字母
    int count=0;
    while (*str!=EOF){
        if (islower(*str++)!=0){
            count++;
        }
    }
    return count;
}
int other(char* str){               //统计标点符号
    int count=0;
    while (*str!=EOF){
        if (ispunct(*str++)!=0){
            count++;
        }
    }
    return count;

}
int number(char* str){              //统计数字字符
    int count=0;
    while (*str!=EOF){
        if (isdigit(*str++)!=0){
            count++;
        }
    }
    return count;
}
