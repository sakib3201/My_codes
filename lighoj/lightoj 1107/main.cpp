#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int q;
        cin>>q;
        printf("Case %d:\n",i);
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            if(x>=x1&&y>=y1&&x<=x2&&y<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
