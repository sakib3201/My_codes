#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=20000000,i,j;
    static bool mark[20000001]={};
    vector<pair<int,int>>v;
    mark[0]=1;
    mark[1]=1;
    int limit=sqrt(n+1);
    for(int i=4;i<=n;i+=2)
       mark[i]=true;
    for(int i=3;i<=limit;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i;j<=n;j+=(2*i))
                mark[j]=true;
        }
    }
    for(int i=5;i<=20000000;i++)
    {
        if(mark[i]==0 && mark[i-2]==0)
        {
            v.push_back(make_pair(i-2,i));
        }
    }
    while(scanf("%d",&j)!=EOF)
        {
            cout<<'('<<v[j-1].first<<", "<<v[j-1].second<<')'<<'\n';
        }

}
