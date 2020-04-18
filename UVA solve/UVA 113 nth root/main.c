#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x,y,ans;
    while(scanf("%lf%lf",&x,&y)!=EOF)
    {
        ans=pow(y,(1/x));
        printf("%.0lf\n",ans);
    }
    return 0;
}
