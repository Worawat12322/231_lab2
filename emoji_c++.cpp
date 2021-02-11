#include <iostream>
using namespace std;

int main(){
	char ch;
	int nm,cal;
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
					printf("\(^_^)/");	
				else printf("(^_^)");		
			}
			else 
			{
				if(nm%10 == 5)
					printf("\{@_@}/");
				else	
					printf("{@_@}");
			
			}
		}
		else if(ch<=82)
		{
			cal = nm%2;
			if(cal==1)
			{
				if(nm%10 == 5)
					printf("\(*o*)/");
				else printf("(*o*)");
			}
			else
			{
				if(nm%10 == 5)
					printf("\{*v*}/");
				else printf("{*v*}");
			} 
		}
		else if(ch<=90)
		{
			cal = nm%2;
			if(cal==1)
			{
				if(nm%10 == 5)
					printf("\(T_T)/");
				else printf("(T_T)");
			}
				
			else 
			{
				if(nm%10 == 5)
					printf("\{x_x}/");
				else printf("{x_x}");
			}		
		}
	}
	return 0;
}
