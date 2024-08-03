#include"stdio.h"
int main()
{
	int x,s=0;  
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	while(x)
	{
		s=s*10+x%10;
		x=x/10;
	}
	printf("逆序组成一个新的整数:%d\n",s);
	
}