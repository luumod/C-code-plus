//16.17练习题
//3
#define MIN(X,Y) ((X)>(Y))?(Y):(X)
//4
#define ENEN_GT(X,Y) (((X)%2==0 && (X)>(Y))?1:0)
//5
#define MIH(X,Y) printf(#X " is %d and" #Y "is %d\n",X,Y);
//6
#define SIZE 25
#define SPACE ' '
#define PS() putchar(' ')
#define BIG(X) ((X)+3))
#define SUMSQ(X,Y) (((X)*(X))+((Y)*(Y)))
//7
#define PRINTF(X) printf("name:" #X "; value: %d; adress:%p",X,&X)
//8
#define _SKIP_
#ifdef _SKIP_
/*需要被省略的代码块*/
#endif 
//9
#ifdef _PR_DATA
    printf("%s\n",__DATE__);
    
#endif 
//10 内联函数
double square1(double x) {return x*x;}
double square2(double x) {return (int) (x*x);}
inline double square3(double x) {return (int) (x*x+0.5);}   //强制四舍五入
//11
#define ASD(X) _Generic((X),\
    __bool:"boolean",\
    default:"not boolean"\
)