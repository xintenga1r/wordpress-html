#include <stdio.h>

int main()
{
	int a,b;
	printf("����2����:");
	scanf("%d%d",&a,&b);
	if (a!=b)
	{
		if(a>b){
			printf("%d > %d\n",a,b);
		}
		else{
			printf("%d < %d",a,b);
		}
	} 
	else{
		printf("%d = %d\n",a,b);
	}
}