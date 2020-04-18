#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int x;
    vector<long long int>v;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}
