#include <stdio.h>

int main()
{
	int a,b,c;
	printf("����2����Ȼ�󽻻�:\n");
	scanf("%d%d",&a,&b);
	printf("����ǰ:%d  %d",a, b);
	c=a;a=b;b=c;
	printf("������%d  %d",a, b);
} 