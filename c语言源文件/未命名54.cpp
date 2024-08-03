#include <stdio.h>

int main()
{
   int a,b,c,d,e;
   for(a=100;a<=1000;a++) 
   b=a/100;
   c=a/10%10;
   d=a%10;
   e=b+c+d;
   printf("%d\n",e);
}