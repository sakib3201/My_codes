#include <iostream>

using namespace std;

int main()
{
    int t,r,c,ans;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x=2,y=2;
        scanf("%d %d",&r,&c);
        if(r==1||c==1)
            ans=r*c;
        else if(r==2||c==2)
        {
            if(r==2)
                x=c;
            else if(c==2)
                x=r;

            if(x%4==0) ans=x;
            if(x%4==1) ans=x+1;
            if(x%4==2) ans=x+2;
            if(x%4==3) ans=x+1;
        }
        else if((r*c)%2==0)
            ans=(r*c)/2;
        else
            ans = ((r*c)/2)+1;

        printf("Case %d: %d\n",i,ans);
    }

    return 0;
}
