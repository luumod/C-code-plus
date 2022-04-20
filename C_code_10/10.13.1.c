#include <stdio.h>
#define YEARS 2
#define MONTHS 12
void sum_year(int (*ar)[MONTHS],int n,int m);
void sum_month(int (*ar)[MONTHS],int n, int m);
int main(void){
	int days[YEARS][MONTHS]={
		{1,2,3,4,5,6,7,8,9,10,11,12},
		{2,3,4,5,6,7,8,9,10,11,12,13}};
	printf("行之和:\n");
	sum_year(days,YEARS,MONTHS);
	printf("\n");
	printf("列之和\n");
	sum_month(days,YEARS,MONTHS);
	printf("\n");
	return 0;
}

void sum_year(int (*ar)[MONTHS],int n,int m){
	for (int year=0; year<n; year++){
		int total=0;
		for (int month=0; month<m; month++)
			total+=*(*(ar+year)+month);
		printf("%d年总共%d天.\n",year,total);
	}
}
void sum_month(int (*ar)[MONTHS],int n,int m){
	for (int month=0; month<m; month++){  //月
		int total=0;
		for (int year=0; year<n; year++)  //年
			total+=*(*(ar+year)+month);
		printf("%d月的总和:%d\n",month,total);
	}
}
