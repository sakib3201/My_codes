#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    vector<int>v;
    map<int,int>m;
    while(scanf("%d",&x)!=EOF)
    {

        if(m.count(x)==0)
            {
                m[x]=1;
                v.push_back(x);
            }
        else
            ++m[x];
    }
    int siz=(int)v.size();
    for(int i=0;i<siz;i++)
    {
        cout<<v[i]<<" "<<m[v[i]]<<'\n';
    }
    return 0;
}
