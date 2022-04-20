#include <stdio.h>
#define L 3.785
#define KM 1.609
int main(void)
{
	float Ym,Jl;
	printf("你行驶了多少英里?");
	scanf("%f",&Ym);
	printf("消耗了多少加仑？");
	scanf("%f",&Jl);
	printf("你消耗每加仑的油行驶了%.1f英里 Ym/Jl.\n",Ym/Jl);
	printf("你消耗每升的油行驶了%.1f公里 L/KM.\n",
			(KM*Ym)/(L*Jl));
	return 0;
}


