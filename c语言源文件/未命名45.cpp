#include"stdio.h"
main()
{
	int n=1,s=0;
	printf("n    s:\n");
	while(1)
	{
		s=s+n;
		printf("%-4d %-4d\n",n,s);
		if(s>=500)
		   break;
		n=n*2;
	}
	n=n/2;
	printf("�ۼӺ�С��500ʱ�����nֵ:%d\n",n);
} 