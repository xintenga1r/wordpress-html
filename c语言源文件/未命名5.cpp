#include <stdio.h>
int main()
{
	int a;
	printf("�������:\n");
	scanf("%d",&a);
	if(a>=90){
		printf("����Ϊ:A");
	}
	else if(a>=80){
		printf("����Ϊ:B");
	}
	else if(a>=70){
		printf("����Ϊ:C");
	}
	else if(a>=60){
		printf("����Ϊ:D");
	}
	else{
		printf("����Ϊ:E");
	}
	
}