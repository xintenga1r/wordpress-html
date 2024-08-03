#include <stdio.h>

int main()
{
	float f,a,b,c,d,e;
	printf("输入3个数\n");
	scanf("%f%f%f",&a,&b,&c);
	d=(a+b+c);
	printf("相加等于%f\n",d);
	e=(a*b*c);
	printf("相乘等于%f\n",e);
	f=(a/b)/c;
	printf("相除等于%f\n",f);
}