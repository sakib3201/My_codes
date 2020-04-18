#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[101],x;
    int i;
    scanf("%lf",&x);
    for(i=0;i<100;i++)
    {
        a[i]=x;
        x=x/2;
    }
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,a[i]);
    }



    return 0;
}
