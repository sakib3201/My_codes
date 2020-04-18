#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,l,d[200],max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&l);
        for(k=0;k<l;k++)
        {
            scanf("%d",&d[k]);
        }
        for(k=0;k<l;k++)
        {
            if(max<d[k])
                max=d[k];
        }
      printf("Case %d: %d\n",i,max);
      max=0;
    }
    return 0;
}
