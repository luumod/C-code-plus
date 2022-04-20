#include <stdio.h>
#define ROWS 3
#define COLS 4
int sum(int rows,int cols,int (*ar)[cols]);
int main(void){
	int i,j;
	int rs=3,cs=10;
	int junk[ROWS][COLS]={
		{2,4,6,8},
		{3,5,7,9},
		{12,10,8,6}};
	int morejunk[ROWS-1][COLS+2]={
		{20,30,40,50,60,70},
		{5,6,7,8,9,10}};
	int varr[rs][cs];  //变长数组

	for (i=0; i<rs; i++){
		for (j=0; j<cs; j++)
			varr[i][j]= i*j+j;
	}

	printf("3 X 4:\n");
	printf("sum:%d\n",sum(ROWS,COLS,junk));
	printf("2 X 6:\n");
	printf("sum:%d\n",sum(ROWS-1,COLS+2,morejunk));
	printf("3 X 10:\n");
	printf("sum:%d\n",sum(rs,cs,varr));
	return 0;
}
int sum(int rows,int cols,int (*ar)[cols]){
	int total=0;
	int i,j;
	for (i=0; i<rows; i++){
		for (j=0; j<cols; j++)
			total+=*(*(ar+i)+j);
	}
	return total;
}
