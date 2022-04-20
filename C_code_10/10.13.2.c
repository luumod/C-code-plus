#include <stdio.h>
void copy_1(double ar[],double s[],int n);
void copy_2(double *ar,double *s,int n);
void copy_3(double *ar,double *s_first,double *s_last);
int main(void){
	double num[5]={1.1,2.2,3.3,4.4,5.5};
	double tar1[5];
	double tar2[5];
	double tar3[5];
	copy_1(tar1,num,5);
	copy_1(tar2,num,5);
	copy_1(tar3,num,5);

	return 0;
}
void copy_1(double ar[],double s[],int n){
	for (int i=0; i<n; i++)
		ar[i]=s[i];
}
void copy_2(double *ar,double *s,int n){
	for (int i=0; i<n; i++)
		*(ar+i)=*(s+i);
}
void copy_3(double *ar,double *s_first,double *s_last){
	for (int i=0; (s_last-s_first)>0; i++,s_first++)
		*(ar+i)=*(s_first+i);
}
