#include <stdio.h>

int main()
{
	int a,b,c;
	printf("����3����\n");
	scanf("%d%d%d",&a,&b,&c);
	if(!a>=b){
		if(!a>=c){
			if(!b>=c){
				
			}
			else{
				printf("%d\n",b);
			}
		}
		else{
			printf("%d\n",c);
		}
	}
	else{
		printf("%d\n",a);
	}
}