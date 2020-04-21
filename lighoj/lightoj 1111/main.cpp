#include <bits/stdc++.h>
using namespace std;

bool vis[1001];
int cnt[1001];
vector<int>r[1001];
void bfs(int a,int al);
void clr();
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        int n,k,m;
        set<int>members;
        cin>>n>>k>>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            members.insert(x);
        }
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            r[u].push_back(v);
        }
        for(set<int>::iterator it=members.begin();it!=members.end();it++)
            bfs(*it,k);
        int ans=0;
        int siz=members.size();
        for(int i=1;i<=1000;i++)
            {
                if(cnt[i]==siz)
                ++ans;
            }

         printf("Case %d: %d\n",++cas,ans);
        clr();
    }
    return 0;
}
void bfs(int a,int al)
{
    for(int i=0;i<=1000;i++)
        vis[i]=0;
    queue<int>q;
    vis[a]=1;
    ++cnt[a];
    q.push(a);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0;i<r[u].size();i++)
        {
            if(vis[r[u][i]]==0)
            {
                int v = r[u][i];
                vis[v]=1;
                ++cnt[v];
                q.push(v);
            }
        }
    }
}

void clr()
{
    for(int i=0;i<1001;i++)
    {
        vis[i]=0;
        cnt[i]=0;
    }
    for(int i=0;i<1001;i++)
    {
        r[i].clear();
    }
}
