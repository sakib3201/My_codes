#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[20],n,i,k,l,w;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&k);
       for(l=0;l<k;l++)
       {
           scanf("%d",&a[l]);
       }
       if(k%2==0)
       {
           w=(k/2)-1;
       }
       else
       {
           w=(k/2);
       }
       printf("Case %d: %d\n",i,a[w]);

   }

    return 0;
}
