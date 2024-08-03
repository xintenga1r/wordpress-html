#include <stdio.h>
int main()
{
	int a;
	printf("输入分数:\n");
	scanf("%d",&a);
	if(a>=90){
		printf("评级为:A");
	}
	else if(a>=80){
		printf("评级为:B");
	}
	else if(a>=70){
		printf("评级为:C");
	}
	else if(a>=60){
		printf("评级为:D");
	}
	else{
		printf("评级为:E");
	}
	
}