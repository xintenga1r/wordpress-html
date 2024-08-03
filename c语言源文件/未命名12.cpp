#include <stdio.h>

int main()
{
	int a,b,c,d,e; double f;
	printf("输入3个数\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(a+b+c);
	
	e=(a*b*c);
	
	f=(a/b/c);
	printf("相加等于:%d\n相乘等于:%d\n相除等于:%lf\n",d,e,f);
}