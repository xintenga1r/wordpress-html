#include <stdio.h>
 

int main()
{
	int a[10];
	int s,i=0;
	for(s=0;s<10;s++)
	{
		printf("输入10个数:\n",s+1);
		scanf("%d",&a[s]);
		i+=a[s];
	}
	i=a/10;
	printf("平均数为:\n",i);
}