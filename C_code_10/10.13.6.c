#include <stdio.h>
#define SIZE 10
void daox(double *ar, int n);
int main(void){
	double num[SIZE]={1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1};
	int i,j;
	for (i=0; i<SIZE; i++)
		printf("%f,",num[i]);
	printf("\n");
	daox(num,SIZE);
	for (i=0; i<SIZE; i++)
		printf("%f,",num[i]);
	printf("\n");

	return 0;
}

void daox(double *ar,int n){
	double temp;
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i-1; j++){
			if (*(ar+j)<*(ar+j+1)){
				temp=*(ar+j);
				*(ar+j)=*(ar+j+1);
				*(ar+j+1)=temp;
			}
		}
	}
}

				
