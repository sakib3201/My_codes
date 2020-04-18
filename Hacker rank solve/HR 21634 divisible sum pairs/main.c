#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j,a[100],c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if((a[i]+a[j])%k==0)
                c++;
         }
     }
     printf("%d",c);
    return 0;
}
