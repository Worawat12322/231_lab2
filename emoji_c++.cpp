#include <iostream>
using namespace std;

int main(){
	char ch;
	int nm,cal;
	int sl = 92;
	cin >> ch;
	cin >> nm;
	if(ch>=65&&ch<=90)
	{
		if(ch<=73)
		{
			cal = nm%2;
			if(cal==1)
			{
				if(nm%10 == 5)
					printf("%c(^_^)/",sl);	
				else printf("(^_^)");		
			}
			else 	
				printf("{@_@}");	
		}
		else if(ch<=82)
		{
			cal = nm%2;
			if(cal==1)
			{
				if(nm%10 == 5)
					printf("%c(*o*)/",sl);
				else printf("(*o*)");
			}
			else
				 printf("{*v*}");
		}
		else if(ch<=90)
		{
			cal = nm%2;
			if(cal==1)
			{
				if(nm%10 == 5)
					printf("%c(T_T)/",sl);
				else printf("(T_T)");
			}
				
			else printf("{x_x}");
					
		}
	}
	return 0;
}
