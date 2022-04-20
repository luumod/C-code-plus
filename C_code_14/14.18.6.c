#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
typedef struct{
    char fname[SIZE];
    char lname[SIZE];
}name;
typedef struct{
    int number;
    name people;
    int count;
    int hit_num;
    int base_num;
    int RBI;
    float BABIP;
}player;
player play_list[19]={};
void read_data(player* pst,FILE*);
//读取文件信息,并保存到结构数组中
void set_info(player*);
//计算结构体信息
void print(player*);
//打印结构体信息
int main(void){
    FILE* fp;
    if ((fp=fopen("data.txt","r"))==NULL){
        printf("Cann't open the %s.\n","data.txt");
        exit(EXIT_FAILURE);
    }
    read_data(play_list,fp);
    set_info(play_list);
    print(play_list);
    fclose(fp);

    return 0;
}
void read_data(player* pst,FILE* fp){
//读取文件信息,并保存到结构数组中
    if (fp==NULL){
        printf("Cann't open the file.\n");
        exit(EXIT_FAILURE);
    }
    int number,count,hit_num,base_num,RBI;
    float BABIP;
    char fname[SIZE],lname[SIZE];
    int read_count=1;
    while (1){
        //用fscanf函数读取返回，返回值为读取的数据的个数，可以作为读取成功的判断标准
        read_count=fscanf(fp,"%d %s %s %d %d %d %d",&number,fname,lname,&count,
            &hit_num,&base_num,&RBI);
        if (read_count<7)
            break;
        strcpy(pst[number].people.fname,fname);
        strcpy(pst[number].people.lname,lname);
        pst[number].number=number;
        pst[number].count+=count;
        pst[number].hit_num+=hit_num;
        pst[number].base_num+=base_num;
        pst[number].RBI+=RBI;
    }
}
void set_info(player* pst){
    for (int i=0; i<19;i++){
        pst[i].BABIP=(float) pst[i].hit_num / (float) pst[i].count;
    }
}
void print(player* pst){
    printf("IO The infomation is all:\n");
    for (int i=0; i<19; i++){
        printf("%2d %10s.%-10s %5d %5d %7d %6d %.2f.\n",pst[i].number,pst[i].people.fname,
        pst[i].people.lname,pst[i].count,pst[i].hit_num,pst[i].base_num,
        pst[i].RBI,pst[i].BABIP);
    }
}