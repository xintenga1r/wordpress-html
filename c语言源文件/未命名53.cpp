#include <stdio.h>

int main()
{
	int a;
	printf("输入一个数:\n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("满足条件");
	}
	else{
		printf("不满足条件");
	}
}