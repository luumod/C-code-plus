#include <stdio.h>
#define ROWS 5
#define COLS 12
void rain(int n,int m,const int ar[n][m]);
void rain_month(int n,int m,const int (*ar)[m]);
int main(void){
	int ar[ROWS][COLS]={
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{2,3,4,5,6,7,8,9,10,11,12,13},
		{3,4,5,6,7,8,9,10,11,12,13,14},
		{4,5,6,7,8,9,10,11,12,13,14,15},
		{5,6,7,8,9,10,11,12,13,14,15,16}};
	rain(ROWS,COLS,ar);
	rain_month(ROWS,COLS,ar);

	return 0;
}
void rain(int n,int m,const int ar[n][m]){
	int total,stotal=0;
	for (int i=0; i<n; i++){
		total=0;
		for (int j=0; j<m; j++)
			total+=ar[i][j];
		printf("%d年的平均降水量为%d\n",2010+i,total/m);
		stotal+=total;
	}
	printf("5年总降水量:%5d\n",stotal);


void rain_month(int n,int m,const int (*ar)[m]){
	int total;
	for (int i=0; i<m; i++){
		total=0;
		for (int j=0; j<n; j++)
			total+=ar[j][i];
		printf("%d月的平均降水量是%d\n",i+1,total/n);
	}
}
