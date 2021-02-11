#include<stdio.h>
int main(){
	int a,b,c,score;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
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
	else printf("Error!!!");
	return 0;
}
