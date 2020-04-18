#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,n=10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=0)
        {
            a[i]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("X[%d] = %d\n",i,a[i]);
    }
    return 0;
}
