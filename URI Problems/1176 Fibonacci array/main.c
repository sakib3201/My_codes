#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int fib[61],i,n,t,k;
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<62;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%lld",&t);
    for(n=0;n<t;n++)
    {
        scanf("%lld",&k);
        printf("Fib(%lld) = %lld\n",k,fib[k]);
    }




    return 0;
}
