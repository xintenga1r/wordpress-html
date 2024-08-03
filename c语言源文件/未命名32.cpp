#include <stdio.h>

int main()
{
	int a,b,c;
	for(a=100;a<1000;a++)
	{
		b=a%10;
		c=a/100;
		if(b==c){
			printf("%d ",a);	
		}
	
	
	}
	
	
}