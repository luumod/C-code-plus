#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int count;
    printf("How many words do you want to input?");
    scanf("%d", &count); //输入你输入的单词数量
    printf("Enter %d words now:", count);
    /* 数组的每个元素都是指向char的指针,因此返回值是一个 指向指针的指针,
    且他所指向的指针指向char类型 */
    char **ch = (char **)malloc(count* sizeof(char));
    //读取字符串操作:
    for (int i = 0; i < count; ++i)
    {
        char temp[100]; //临时temp数组
        scanf("%s", temp);
        int lengh = strlen(temp);
        //分配足够空间来存储单词：
        char *str = (char *)malloc((lengh+1)* sizeof(char));
        //单词在临时数组拷贝到动态分配的存储空间中
        for (int i=0; i<count; ++i){
            str[i]=temp[i];
        }
        ch[i] = str;   //字符串数组指向字符串
    }
    for (int i = 0; i < count; ++i)
    {
        printf("%s\n", *(ch + i)); //打印数组
    }
    free(ch); //释放空间
    printf("All done!\n");
    return 0;
}