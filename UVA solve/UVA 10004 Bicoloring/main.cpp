#include <bits/stdc++.h>

using namespace std;

bool bfs(int s,int n);
bool vis[200]= {};
bool lvl[200]= {};
vector<int>adj[200];
int main()
{
    int n;
    while(cin>>n,n!=0)
    {
        for(int i=0; i<=n; i++)
            adj[i].clear();
        int q,u,v;
        cin>>q;
        while(q--)
        {
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if(bfs(0,n))
            cout<<"BICOLORABLE."<<'\n';
        else
            cout<<"NOT BICOLORABLE."<<'\n';
    }
    return 0;
}

bool bfs(int s,int n)
{
    for(int i=0; i<n; i++)
    {
        vis[i]=0;
    }
    queue<int>q;
    q.push(s);
    lvl[s]=0;
    vis[s]=true;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<adj[x].size(); i++)
        {
            int k=adj[x][i];
            if(vis[k]==0)
            {
                vis[k]=true;
                if(lvl[x]==0)
                    lvl[k]=1;
                else
                    lvl[k]=0;
                q.push(k);
            }
            else
            {
                if(lvl[k]==lvl[x])
                    return false;
            }
        }
    }
    return true;
}
