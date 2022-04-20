#include <stdio.h>
void show_menu(void);
int get_num(void);
int main(void)
{
	int ch;
	int num1,num2;
	do {
		show_menu();
		ch=getchar();	
		while (getchar()!='\n') continue;
		switch(ch)
		{
		case 'a': printf("Enter first number: ");
			  num1=get_num();
			  printf("\nEnter second number: ");
			  num2=get_num();
			  printf("%d + %d = %d\n",num1,num2,num1+num2);
			  break;
		case 'b': printf("Enter first number: ");
                          num1=get_num();
                          printf("\nEnter second number: ");
                          num2=get_num();
			  printf("%d - %d = %d\n",num1,num2,num1-num2);
			  break;
		case 'c': printf("Enter first number: ");
                          num1=get_num();
                          printf("\nEnter second number: ");
                          num2=get_num();
			  printf("%d * %d = %d\n",num1,num2,num1*num2);
			  break;
		case 'd': printf("Enter first number: ");
                          num1=get_num();
                          printf("\nEnter second number: ");
                          num2=get_num();
			  printf("%d / %d = %d\n",num1 ,num2,num1/num2);
			  break;
		case 'q' :printf("Bye!\n");break;
		default : printf("please enter again:\n");break;
		}
		while (getchar()!='\n');
	}while (ch!='q');
	printf("Bye!\n");
	return 0;
}

void show_menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a.add          b.subtract\n");
	printf("c.multiply     d.divide\n");
	printf("q.quit\n");
	
}

int get_num(void)
{	
	int num;
	char ch;
	while (scanf("%d",&num)!=1)
	{
		while ((ch=getchar())!='\n')
			putchar(ch);
		printf("%d is not an number.\n",num);
		printf("please enter a number such as a b c d q:\n");
	}
	return num;
}



