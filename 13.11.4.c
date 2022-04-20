//在命令行输入文件，依次输出文件内容
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SIZE 256
int main(int argc,char* argv[]){
    FILE* fp;
    char ch;
    for (int i=0; i<argc-1; i++){
        if ((fp=fopen(argv[i+1],"r"))!=NULL){
            printf("Now,print file:%s.\n",argv[i+1]);
            //把fp的文件内容读取出来
            while ((ch=getc(fp))!=EOF){
                //打印文件内容
                putchar(ch);
            }
            printf("\n");
            fclose(fp);
        }
        else{
            printf("open %s failed.\n",argv[i]);
            exit(EXIT_FAILURE);
        }
    }
    printf("All done,it is %d file printed.\n",argc-1);
    return 0;
}