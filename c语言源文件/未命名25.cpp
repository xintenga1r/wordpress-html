#include"stdio.h"
 main()
{
 int a,b,t;
 scanf("%d%d",&a,&b);
 printf("����ǰa=%d,b=%d\n",a,b);
 t=a;a=b;b=t;//t=546  a=213 b=546
 printf("������a=%d,b=%d\n",a,b);
}
