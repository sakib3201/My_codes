#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,r;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        r=sqrt((a*a)+(b*b)+(c*c));
        printf("%.2lf\n",r);

    }
    return 0;
}
