#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	a=1+2+4+8+16+32+64+128+256;
	if(a>=500) printf("nµÄÖµÎª:128");
	else printf("256"); 
	return 0;
}