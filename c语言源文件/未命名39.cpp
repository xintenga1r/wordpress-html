#include <stdio.h>
int main(int argc, char *argv[])
{
	int a=3 ,b=3;
	(a=0)&&(b=5);
	printf("a=%d,b=%d",a,b);
	return 0;
}