#include"stdio.h"
int main()
{
	int x,s=0;  
	printf("������һ��������\n");
	scanf("%d",&x);
	while(x)
	{
		s=s*10+x%10;
		x=x/10;
	}
	printf("�������һ���µ�����:%d\n",s);
	
}