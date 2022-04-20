#include <stdio.h>
int main(void)
{
        int i,j;
        char end;
        const char start='A';
        printf("请输入终止:q退出");
        scanf("%c",&end);
        for (char ch=start; ch<=end; ch++)
        {
                for (char temp=ch; temp<end; temp++)
                        printf(" ");
                for (char temp=start; temp<=ch;temp++);
                        printf("%c",temp);
                for (char temp=ch-1; temp>=start; temp--)
                        printf("%c",temp);
                printf("\n");
        }
        return 0;
}
