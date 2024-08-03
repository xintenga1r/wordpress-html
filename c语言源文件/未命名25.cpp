#include"stdio.h"
 main()
{
 int a,b,t;
 scanf("%d%d",&a,&b);
 printf("交换前a=%d,b=%d\n",a,b);
 t=a;a=b;b=t;//t=546  a=213 b=546
 printf("交换后a=%d,b=%d\n",a,b);
}
