#include <stdio.h>
void input_array(int rows,int cols,double arr[rows][cols]);    //输入数组
void col_av(int rows,int cols,const double arr[rows][cols]);    //每组的平均值
double array_av(int rows,int cols,const double arr[rows][cols]);  
double array_max(int rows,int cols,const double arr[rows][cols]);
void show_result(int rows,int cols,const double arr[rows][cols]);
int main(void){
	const int rows=3;
	const int cols=5;
	double array[rows][cols];      //数组全为double数据
	
	input_array(rows,cols,array);
	show_result(rows,cols,array);    //终端

	return 0;
}
void input_array(int rows,int cols,double arr[rows][cols]){          //输入数据
	printf("Please enter array number:\n");
	for (int i=0; i<rows; i++){
		printf("Enter five double number:\n");
		for (int j=0; j<cols; j++){
			scanf("%lf",&arr[i][j]);
		}
	}
}
void col_av(int rows,int cols,const double arr[rows][cols]){         //求每行的平均值
	double sum;
	for (int i=0; i<rows; i++){
		sum=0;
		for (int j=0; j<cols; j++)
			sum+=arr[i][j];
		printf("第%d组的平均值是:%lf\n",i+1,sum/cols);
	}
}
double array_av(int rows,int cols,const double arr[rows][cols]){      //求总数据平均值
	double sum=0;
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++)
			sum+=arr[rows][cols];
	}
	return sum;
}
double array_max(int rows,int cols,const double arr[rows][cols]){    //求数组中最大值
	double max_num=arr[0][0];
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++){
			if (max_num<arr[i][j])
				max_num=arr[i][j];
		}
	}
	return max_num;
}
void show_result(int rows,int cols,const double arr[rows][cols]){     //用result 函数最终控制整个函数
	printf("Now.\nLet is check the array:\n");
	printf("The array you input is:\n");
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++)
			printf("%5g",arr[i][j]);
		printf("\n");
	}
	printf("The AVerage of array is :\n");
	/*for (int i=0; i<rows; i++){
		printf("The %d column average is %g\n",i,col_av(cols,arr[i]));*/
	col_av(rows,cols,arr);    //每组五个的平均值
	printf("The array all number average is=%lf\n",array_av(rows,cols,arr));   //所有数据的平均值
	printf("The array data max is %lf\n",array_max(rows,cols,arr));    //数据中最大的值
}

