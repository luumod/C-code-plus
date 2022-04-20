#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TSIZE 45    //存储片名的数组大小
//#define NUM 5       //存储的最大影片数量

struct film{
    char title[TSIZE];
    int rating;
};
char* s_gets(char* str,int n);
int main(void){
    //struct film movies[NUM];
    struct film* movies;
    int number;
    //----------------------malloc-------------------
    puts("Enter the maximum number of movies you enter:");
    scanf("%d",&number);
    while (getchar()!='\n')
        continue;
    movies=(struct film*) malloc(number* sizeof(struct film));
    int i=0;
    int j;

    puts("Enter first movies title:");
    while (i<number && s_gets(movies[i].title,TSIZE)!=NULL &&
        movies[i].title[0]!='\0'){
            puts("Enter your rating <0-10>");
            scanf("%d",&movies[i].rating);
            i++;
            while (getchar()!='\n')
                continue;
            puts("Enter the next movies title:");
        }
    if (i==0){
        printf("Not data entered.\n");
    }
    else
        printf("Here is the movies list:\n");

    for (j=0; j<number; j++){
        printf("Movies; %s Rating :%d.\n",movies[j].title,movies[j].rating);
    }
    puts("Bye!");
    free(movies);

    return 0;
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
            while (getchar()!=0)
                continue;      
    }
    return ret_val;
}
