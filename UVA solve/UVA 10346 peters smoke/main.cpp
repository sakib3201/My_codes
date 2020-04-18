#include <iostream>

using namespace std;

int main()
{
    long long int n,k,c_total=0;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(scanf("%lld %lld",&n,&k)==2)
    {
        c_total=n;
        if (n>=k)
        {
            while(n>=k)
            {
                c_total+=(n/k);
                n=(n/k)+(n%k);
            }
        }
        printf("%lld\n",c_total);

    c_total=0;
    }


return 0;
}
