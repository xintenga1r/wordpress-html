#include <stdio.h>

int main()
{
	int a,b; 
	printf("����a��b��ֵ\n");
	scanf("%d%d",&a,&b);
	if(a!=b){
		if(a>b){
			printf("%d > %d\n,a,b");
		}
		else{
			printf("%d < %d\n,a,b");
		}
	}
	else{
		printf("%d = %d\n,a,b");
	}
}