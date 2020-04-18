#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,n;
    float v,u,d,t,c,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&d,&v,&u);
        p=(u*u)-(v*v);
        c=sqrt((u*u)-(v*v));
        t=(d/c)-(d/u);
        if((p<=0)||(t==0))
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        printf("Case %d: %.3f\n",i,t);
    }
    return 0;
}
