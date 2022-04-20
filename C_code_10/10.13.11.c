#include <stdio.h>
#define ROWS 3
#define COLS 5
void two(int n,int m,int ar[n][m]);
void show(int n,int m,int ar[n][m]);
int main(void){
	int ba[ROWS][COLS]={
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7}};
	show(ROWS,COLS,ba);
	printf("\n");
	two(ROWS,COLS,ba);
	show (ROWS,COLS,ba);
	return 0;
}
void two(int n,int m,int ar[m][m]){
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++)
			ar[i][j] *=2;
	}
}
void show(int n,int m,int ar[n][m]){
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++)
			printf("%4d",ar[i][j]);
		printf("\n");
	}
}

