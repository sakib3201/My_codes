#include <bits/stdc++.h>

using namespace std;


int main()
{
    int i,t,n,a,b;
    string name;

    map<pair<int,int>,string>m;
    scanf("%d",&n);
    while(n--)
    {
        cin>>a>>b>>name;
        m[make_pair(a,b)]=name;
    }
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<m[make_pair(a,b)]<<endl;
    }
    return 0;
}
