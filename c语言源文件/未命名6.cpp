#include <stdio.h>

int main()
{
	char G;
	printf("输入A B C D E:\n");
	scanf("%d",&G);
	
	switch(G)
		{
		case 'A': printf("评级为90及以上\n"); break;
		case 'B': printf("评级为80~90\n"); break;
		case 'C': printf("评级为70~80\n"); break;
		case 'D': printf("评级为60~70\n"); break;
		case 'E': printf("评级为50以下\n"); break; 
		default: printf("输入错误\n"); break;
	}
}