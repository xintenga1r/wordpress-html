#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,c,b,d,e;
	printf("输入一个3位数: \n");
	scanf("%d",&a);
	b=a/100;//123/100=1.23-0.23=1
	c=a/10%10;//123/10=12/10....2
	d=a%10;//123=23/10=0....3
	printf("他的倒数为:%d%d%d\n",d,c,b);
	e=(b+c+d);
	printf("3个数相加等于:%d\n",e);
	return 0;
}