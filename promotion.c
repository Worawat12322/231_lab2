#include<stdio.h>
int main(){
	char pro;
	float time,cash;
	scanf("%c",&pro);
	scanf("%f",&time);
	if(pro =='A')
	{
		cash = time-200;
		cash = cash*3;
		cash+=199;
	}
	else if(pro == 'B')
	{
		cash = time-400;
		cash = cash*2;
		cash+=299;
	}
	printf("%.2f",cash);
	return 0;
}
