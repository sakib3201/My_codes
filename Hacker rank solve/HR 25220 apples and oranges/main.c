#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t,a,b,m,n,app[10000],ora[10000],i,ca=0,co=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++)
    {
        scanf("&d",&app[i]);
    }
    for(i=0; i<m; i++)
    {
        if(((a+app[i])>=s)&&((a+app[i])<=t))
            ca++;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&ora[i]);
        if((b+ora[i]>=s)&&(b+ora[i]<=t))
            co++;
    }
    printf("%d\n",&ca);
    printf("%d\n",&co);

    return 0;
}
