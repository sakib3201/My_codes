#include <bits/stdc++.h>
using namespace std;
vector<int> vec[20009];
bool vis[20009]= {};
bool lvl[20009]= {};
long long int bfs(int x);
void clr(){
 memset(vis,false,sizeof (vis));
 memset(lvl,false,sizeof (lvl));
 for(int i=0;i<20009;i++)
    vec[i].clear();
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,u,v,k,cas=1;
    scanf("%d",&t);
    while(t--)
    {
        clr();
        scanf("%d",&k);
        long long int sum=0;
        while(k--)
        {
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        for(int i=0; i<20009; i++)
        {
            if(vis[i]==0 && !vec[i].empty())
            {
                sum+=bfs(i);
            }
        }
        cout<<"Case "<<cas++<<": "<<sum<<'\n';
    }
    return 0;
}
long long int bfs(int x)
{
    long long int lyc=0,vam=0;
    queue<int>q;
    q.push(x);
    vis[x]=1;
    lvl[x]=1;
    ++lyc;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<vec[u].size(); i++)
        {
            int v=vec[u][i];
            if(vis[v]==0)
           {
                q.push(v);
                vis[v]=1;
                if(lvl[u]==1)
                {
                    lvl[v]=0;
                    ++vam;
                }
                else
                {
                    lvl[v]=1;
                    ++lyc;
                }
            }
        }
    }
    long long int mx=max(vam,lyc);
    return mx;
}
