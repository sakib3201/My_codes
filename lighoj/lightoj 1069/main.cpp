#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        ans=a*4+abs(a-b)*4+19;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
