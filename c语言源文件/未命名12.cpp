#include <stdio.h>

int main()
{
	int a,b,c,d,e; double f;
	printf("����3����\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(a+b+c);
	
	e=(a*b*c);
	
	f=(a/b/c);
	printf("��ӵ���:%d\n��˵���:%d\n�������:%lf\n",d,e,f);
}