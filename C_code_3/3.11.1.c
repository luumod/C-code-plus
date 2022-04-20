/*3.11.1 */
#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
	int big_int = 2147483647;
	/*有符号整数类型的最大值是2的31次方-1*/
	float big_float = 3.4e38;
	/*浮点型数据的最大值为3.4e38*/
	float small_float = 10.0/3;
	/*浮点型数据的有效位数是6位*/

	printf("The big int data is %d\n",big_int+1);
	/*整形数据的最大值+1，造成越界，结果为-2147483648*/
	printf("The big float data is %f\n",big_float*10);
	/*浮点型最大数据乘10造成越界，输出int。如果浮点型数据只加一个小数据
	 * 由于其精确度限制，不会造成越界*/
	printf("The big float data is %f\n",small_float);
	/*打印3.333333,精度缺失*/
	printf("The MAX float data is %f\n",FLT_MAX);
	printf("The MAX int data is %d\n",INT_MAX);
	return 0;
}
