#include<stdio.h>

int main(){
	char pro;
	float time,cash;
	int cashint;
	scanf("%c",&pro);
	scanf("%f",&time);
	
	if(pro =='A')
	{
		if(time>=200)
		{
			cash = time-200;
			cash = cash*0.05*60;
			cash+=199;
			if(cash-(int)(cash)>0)
				cash+=1;
			cash = (int)(cash);
		}
		else cashint = 199;
	}
	else if(pro == 'B')
	{
		if(time>=400)
		{
			cash = time-400;
			cash = cash*0.033*60;
			cash+=299;
			if(cash-(int)(cash)>0)
				cash+=1;
			cash = (int)(cash);
		}
		else cash = 299;
	}
	printf("%.2f",cash);
	return 0;
}
