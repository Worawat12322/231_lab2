#include<stdio.h>
int main(){
	int a,b,c,score;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((a<=30&&a>=0)&&(b<=30&&b>=0)&&(c<=40&&c>=0))
	{
	score = a+b+c;
	if(score>=0&&score<=100)
	{
		 if(score>=80)
			printf("A");

		else if(score>=75)
			printf("B+");

		else if(score>=70)
			printf("B");

		else if(score>=65)
			printf("C+");

		else if(score>=60)
			printf("C");

		else if(score>=55)
			printf("D+");

		else if(score>=50)
			printf("D");
		else
			printf("F");
	}
	}
	return 0;
}
