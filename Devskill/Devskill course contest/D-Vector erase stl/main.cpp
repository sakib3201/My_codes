#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,y;
    long long int x;

    vector<long long int>v;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>y;
    v.erase(v.begin()+(y-1));
    cin>>a>>b;
    a=a-1;
    b=b-1;
    v.erase(v.begin()+a,v.begin()+b);
    cout<<v.size()<<'\n';
    int i=0;
    while((v.begin()+i)!=v.end())
    {
        cout<<v.at(i)<<" ";
        ++i;
    }
    return 0;
}
