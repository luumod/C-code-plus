#include <stdio.h>
#define SIZE 10
double num_long(double *ar,int n);
int main(void){
	double num[SIZE]={1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1};
	double cha=num_long(num,SIZE);
	printf("最大值最小值的差值是:%f\n",cha);
	return 0;
}
double num_long(double *ar,int n){
	double max=*ar;
	double min=*ar;
	for (int i=0; i<n; i++){
		if (max<*(ar+i))
			max=*(ar+i);
		if (min>*(ar+i))
			min=*(ar+i);
	}
	return max-min;
}
