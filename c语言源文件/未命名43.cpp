#include <stdio.h>

int main()
{
	double a,b,c;
	for(a=0.25;a<=500.0;++a)
	{
		
		a*=4;
		printf("%lf ",a);
	}
	for(b=0.5;b<=500.0;++b)
	{
		b*=4;
		printf("%lf \n",b);
	}
	c=a+b;
	
	printf("%lf",c);	
	
		

}