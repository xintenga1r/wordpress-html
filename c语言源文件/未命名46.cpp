#include <stdio.h>
 

int main()
{
	int a[10];
	int s,i=0;
	for(s=0;s<10;s++)
	{
		printf("����10����:\n",s+1);
		scanf("%d",&a[s]);
		i+=a[s];
	}
	i=a/10;
	printf("ƽ����Ϊ:\n",i);
}