#include <stdio.h>
#define ROWS 3  //行数
#define COLS 4  //列数
void sum_rows(int ar[][COLS],int rows);
void sum_cols(int (*ar)[COLS],int rows);
int sum_all(int (*ar)[COLS],int rows);
int main(void){
	int junk[ROWS][COLS]={
		{2,4,6,8},
		{3,5,7,9},
		{12,10,8,6}};
	sum_rows(junk,ROWS);
	sum_cols(junk,ROWS);
	printf("Sum of all is %d\n",sum_all(junk,ROWS));
	return 0;
}
void sum_rows(int ar[][COLS],int rows){
	int total;   //计算每行的总和
	for (int i=0; i<rows; i++){
		total=0;
		for (int c=0; c<COLS; c++)
			total+=ar[i][c]; //ar[i][c] 
		printf("rows : %d,sum : %d\n",i,total);
	}
}
void sum_cols(int (*ar)[COLS],int rows){
	int total;   //计算每列的总和
	for (int i=0; i<COLS; i++){
		total=0;
		for (int j=0; j<rows; j++)
			total+=*(*(ar+j)+i);
		printf("cols : %d,sum : %d\n",i,total);
	}
}
int sum_all(int (*ar)[COLS],int rows){
	int total=0;    //计算每行每列的总和
	for (int i=0; i<rows; i++){
		for (int j=0; j<COLS; j++)
			total+=*(*(ar+i)+j);
	}
	return total;
}
