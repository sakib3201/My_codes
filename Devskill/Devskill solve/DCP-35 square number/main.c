#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    double y,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&x);
        y=(int)sqrt(x);
        if(x==(y*y))
            printf("Case %d: YES\n",i);
        else
            printf("Case %d: NO\n",i);
    }

    return 0;
}
