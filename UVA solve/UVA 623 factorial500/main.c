#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int fac=1,n,i;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=1;i<n+1;i++)
        {
            fac=fac*i;
        }
        printf("%lld!\n",n);
        printf("%e\n",fac);
        fac=1;
    }
    return 0;
}
