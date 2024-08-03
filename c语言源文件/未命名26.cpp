#include <stdio.h>

int main()
{
	int a,b,c;
	printf("输入2个数然后交换:\n");
	scanf("%d%d",&a,&b);
	printf("交换前:%d  %d",a, b);
	c=a;a=b;b=c;
	printf("交换后：%d  %d",a, b);
} 