#include <stdio.h>
void copy_num(int n,int m,double copy[n][m],const double old[n][m]);
void show(int n,int m,const double (*ar)[m]);
int main(void){
	int n=3;
	int m=5;
	double copy[n][m];
	const double old[n][m];
	old[n][m]={
		{0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4},
		{9.1,8.5,2.3,6.1,8.4}};
	copy_num(n,m,copy,old);
	show(n,m,copy);

	return 0;
}
void copy_num(int n,int m,double copy[n][m],const double old[n][m]){
	for (int i=0; i<n; i++){   //数组的复制,i行,j列
		for (int j=0; j<m; j++)
			copy[i][j]=old[i][j];
	}
}
void show(int n,int m,const double (*ar)[m]){
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++)
			printf("%f",*(*(ar+i)+j));
		printf("\n");
	}
}

