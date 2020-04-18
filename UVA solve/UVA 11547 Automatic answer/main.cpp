#include <iostream>

using namespace std;

int main()
{
    long long int n=0;
    int i,j;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
    scanf("%lld",&n);
    n=(n*567);
    n=n/9;
    n+=7492;
    n*=235;
    n/=47;
    n=n-498;
    n/=10;
    n=n%10;
    n=abs(n);
    printf("%lld\n",n);
    }
    return 0;

}
