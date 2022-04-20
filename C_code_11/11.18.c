#include <stdio.h>   //拼接两个字符串
#include <string.h>
#define SIZE 80
char *s_get(char *st,int n);
int main(void){
	char flower[SIZE];
	char addon[]="s small like old shoes";
	
	puts("What is your favourite flower?");
	if (s_get(flower,SIZE)){
		strcat(flower,addon);  //strcat():将两个字符串和在一起，并以第一个存储
		puts(flower);
		puts(addon);
	}
	else
		puts("End of file encountered!");
	puts("Bye!");
	return 0;
}
char *s_get(char *st,int n){
	char *ret_val;
	int i=0;
	
	ret_val=fgets(st,n,stdin);
	if (ret_val){    //将换行符换为空字符，并跳过多余的输入部分
		while (st[i]!='\n'&&st[i]!='\0')
			i++;
		if (st[i]=='\n')
			st[i]='\0';
		else
			while (getchar()!='n')
				continue;
	}
	return ret_val;
}

