#include <stdio.h>
#define ROWS  3
#define COLS  5
void input(int rows,double ar[][COLS]);
void aver_num(int rows,double ar[][COLS]);
double all(int rows,double ar[][COLS]);
double max(int rows,double ar[][COLS]);
int main(void){
	double ar[ROWS][COLS];
	input(ROWS,ar);
	aver_num(ROWS,ar);
	double all_num=all(ROWS,ar);
	printf("所有数据的平均数是:%lf\n",all_num);
	double max_num=max(ROWS,ar);
	printf("所有数据的最大值是:%lf\n",max_num);

	return 0;
}
void input(int rows,double ar[][COLS]){
	printf("enter array number:\n");
	for (int i=0; i<rows; i++){
		printf("enter five number in array:\n");
		for (int j=0; j<COLS; j++)
			scanf("%lf",&ar[i][j]);
	}
}
void aver_num(int rows,double ar[][COLS]){
	double total;
	for (int i=0; i<rows; i++){
		total=0;
		for (int j=0; j<COLS; j++)
		{
			total+=ar[i][j];
		}	
		printf("第%d组的平均值是:%lf\n",i+1,total/COLS);
	}
}
double all(int rows,double ar[][COLS]){
	double total=0;
	for (int i=0; i<rows; i++){
		for (int j=0; j<COLS; j++)
			total+=*((*ar+i)+j);
	}
	return total/(rows*COLS);
}
double max(int rows,double ar[][COLS]){
	double max_num;
	for (int i=0; i<rows; i++){
		for (int j=0; j<COLS; j++){
			if (max_num<ar[i][j]){
				max_num=ar[i][j];
			}
		}
	}
	return max_num;
}



