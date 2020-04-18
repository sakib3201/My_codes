#include<bits/stdc++.h>
using namespace std;

bool vis[20][20];
char m[20][20];
int X[4]= {1,-1,0,0};
int Y[4]= {0,0,1,-1};
int r,c;
bool condition(int x,int y)
{
    return m[x][y]=='.'&&!vis[x][y]&&x<r&&y<c&&x>=0&&y>=0;
}

void traverse(int x,int y)
{
    vis[x][y]=true;
    for(int i=0; i<4; i++)
    {
        if(condition(x+X[i],y+Y[i]))
            traverse(x+X[i],y+Y[i]);
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t,cas=1;;
    cin>>t;
    while(t--)
    {
        memset(vis,false,sizeof(vis));
        int sx,sy;
        cin>>c>>r;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>m[i][j];
                if(m[i][j]=='@')
                {
                    sx=i;
                    sy=j;
                }
            }
        }
        traverse(sx,sy);
        int ans=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(vis[i][j])
                    ++ans;
            }
        }

        cout<<"Case "<<cas<<": "<<ans<<'\n';
        ++cas;
    }
}
