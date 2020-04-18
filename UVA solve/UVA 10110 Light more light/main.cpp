#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1&&n!=0)
    {

        if(floor(sqrt(n))==ceil(sqrt(n)))
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
