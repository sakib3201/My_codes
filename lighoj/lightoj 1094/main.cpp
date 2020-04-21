#include <bits/stdc++.h>

using namespace std;

bool vis[30000];
int distan[30000];
void bfs(int a,int n);
void clr(int n);
vector<int>v[30000];
vector<int>c[30000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        int n,x,y,cost;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            v[i].clear();
            c[i].clear();
        }
        for(int i=0; i<n-1; i++)
        {
            scanf("%d %d %d",&x,&y,&cost);
            v[x].push_back(y);
            v[y].push_back(x);
            c[x].push_back(cost);
            c[y].push_back(cost);
        }
        int max1=-1,src1;
        clr(n);
        bfs(0,n);
        for(int i=0; i<n; i++)
        {
            if(distan[i]>max1)
            {
                max1=distan[i];
                src1=i;
            }
        }
        clr(n);
        int ans=0;
        bfs(src1,n);
        for(int i=0; i<n; i++)
        {
            if(distan[i]>ans)
            {
                ans=distan[i];
            }
        }
        printf("Case %d: %d\n",++cas,ans);

    }
    return 0;
}
void clr(int n)
{
    for(int i=0; i<n; i++)
    {
        vis[i]=0;
        distan[i]=0;
    }
}
void bfs(int a,int n)
{
    queue<int>q;
    vis[a]=1;
    q.push(a);
    while(!q.empty())
    {
        int top;
        top = q.front();
        q.pop();
        for(int i=0; i<v[top].size(); i++)
        {
            int var = v[top][i];
            if(!vis[var])
            {
                vis[var]=1;
                distan[var]=distan[top]+c[top][i];
                q.push(var);
            }
        }
    }
}
