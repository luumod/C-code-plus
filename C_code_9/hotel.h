//声明各种函数原型及符号常量

#define QUIT 5 

#define HOTEL1 180
#define HOTEL2 225
#define HOTEL3 255
#define HOTEL4 355

#define DISCOUNT 0.95
#define STARS "***********************"


//显示菜单列表
int menu(void);

//返回预定天数
int get_nights(void);

//计算结果
void showprice(double rate,int nights);

