#include <stdio.h>
static int mode;
static double range,fuel;   //三个变量定义在外面，使用static

void set_mode(int n);   //判断用户输入的数据
void get_mode(void);    //输入数据
void show_mode(void);   //显示数据