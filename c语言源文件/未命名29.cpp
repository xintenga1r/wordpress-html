#include <stdio.h>
int main()
{
    int hun, ten, ind, n;
    printf("result is:");
    for( n=100; n<1000; n++ )  /*整数的取值范围*/
    {
        hun = n / 100;
        ten = (n-hun*100) / 10;
        ind = n % 10;
        if(n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*各位上的立方和是否与原数n相等*/
            printf("%d  ", n);
    }
    printf("\n");
   
    return 0;
}