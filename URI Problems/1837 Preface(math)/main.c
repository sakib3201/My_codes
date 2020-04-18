#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x,y,q,p,r;
    scanf("%lld %lld",&x,&y);

    q=x/y;
    r=x%y;
    if(r<0)
    {
    	if(q<0)
    	q--;
     else if(q>=0)
     q++;
    }
    r=x-(q*y);
    printf("%lld %lld\n",q,r);
    return 0;
}
