#include <stdio.h> //strncmp()函数查找相同元素
#include <string.h>
#define SIZE 6
int main(void)
{

    const char *list[SIZE] = {
        "astroaaa", "astrobbb",
        "astroccc", "astroddd",
        "osddawdd", "daaaaaaa"};
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (strncmp(list[i], "astro", 5) == 0)
        { //查找 astro 如果找到，则返回零
            printf("Found:%s\n", list[i]);
            count++;
        }
    }
    printf("The list contained %d words begining"
           "with \"astro\"\n",count);

    return 0;
}