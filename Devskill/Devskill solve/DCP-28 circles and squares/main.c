#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d,r,k;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&a,&b);
        c=sqrt(4*a*a);
        d=sqrt(2*(b*b));
        r=fabs(c-d);
        if(r<.01)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
