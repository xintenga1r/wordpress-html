#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("输入一个数:\n"); 
	scanf("%d",&a);
	if(a>=18){
		printf("已成年");
	}
	else{
		printf("未成年");
	}
	return 0;
}