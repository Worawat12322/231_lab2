#include<stdio.h>
int main(){
	int month[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	int a,b;
	int next;
	scanf("%d %d",&a,&b);
	next = a+month[b-1];
	if(next>7)
	{
		next = next - 7;
	}
	printf("%d",next);
	return 0;
}
