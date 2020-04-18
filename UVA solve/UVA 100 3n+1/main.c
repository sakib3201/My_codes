#include <stdio.h>
#include <stdlib.h>

int main()
{

   long long int p,q,x,y,maxc=0,c=1,n=0;

    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
    if(x>y)
       {
         p=x;
         q=y;
       }
     else
       {
         p=y;
         q=x;
       }
    for(;q<=p;q++)
    {
        n=q;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                c++;
            }
            else
            {
              n=(3*n)+1;
              c++;
            }
        }

        if(c>maxc)
            maxc=c;
            c=1;
    }
    printf("%lld %lld %lld\n",x,y,maxc);
    maxc=0;
    c=1;
    }
    return 0;
}
