#include <stdio.h>
#define JUST_CHAR 5
#define LIMIT 4 
int main(void){
    int i;
    int total=0;
    for (i=1; i<LIMIT; i++){
        total+=2*i*i+1;
    
#ifdef JUST_CHAR
    printf("i=%d,running total=%d\n",i,total);
#endif
    }
    printf("Grand total =%d.\n",total);

    return 0;
}