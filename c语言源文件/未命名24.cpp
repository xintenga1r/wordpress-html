#include <stdio.h>

int main()
{
	float s=0,a=1,b=1,t;
	int i;
	for(i=1;i<=10;i++)
	{
		s=a+a/b;
		printf("%f%f\n",a,b);
		t=a;
		a=b;
		b=t+b;
	}
	printf("%f\n",s);
}