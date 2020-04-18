#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,res;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&x);
        res=(sqrt(1+8*x)-1)/2;
        printf("%lld\n",res);
    }
    return 0;
}
