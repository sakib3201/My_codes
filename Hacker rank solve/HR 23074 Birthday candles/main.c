#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,max=0,c=0,a[10000];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
            c++;
    }
    printf("%d",c);
    return 0;
}
