#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a[3]={},t;
    cin>>t;
    for(long long int i=1;i<=t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
            printf("Case %lld: yes\n",i);
        else
            printf("Case %lld: no\n",i);
    }
    return 0;
}
