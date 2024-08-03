#include"stdio.h"
main()
{
	int i,a,b;//,t=0;
	for(i=100;i<1000;i++)
	{
		a=i%10;
		b=i/100;
		if(a==b)
		{
			printf("%d ",i);
		}
	}
	
}