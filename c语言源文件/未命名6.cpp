#include <stdio.h>

int main()
{
	char G;
	printf("����A B C D E:\n");
	scanf("%d",&G);
	
	switch(G)
		{
		case 'A': printf("����Ϊ90������\n"); break;
		case 'B': printf("����Ϊ80~90\n"); break;
		case 'C': printf("����Ϊ70~80\n"); break;
		case 'D': printf("����Ϊ60~70\n"); break;
		case 'E': printf("����Ϊ50����\n"); break; 
		default: printf("�������\n"); break;
	}
}