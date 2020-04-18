#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,sum=0,t;
    vector<int>a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;
        a.push_back(sum);
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        cout<<lower_bound(a.begin(),a.end(),t)-a.begin()+1<<'\n';
    }
    return 0;
}
