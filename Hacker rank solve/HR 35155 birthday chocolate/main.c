#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[101],sum=0,c=0,i,j=0,k=0,m,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&d,&m);
    for(i=0;i<(n-m+1);i++)
    {
        for(j=k;j<m+k;j++)
        {
            sum+=a[j];
        }
        if(sum==d)
            c++;
        k++;
        sum=0;
    }
    printf("%d",c);
    return 0;
}
