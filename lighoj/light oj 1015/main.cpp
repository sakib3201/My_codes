#include <iostream>

using namespace std;

int main()
{
    int t,sum,x,q;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&q);
        sum=0;
        bool flag=true;
        for(int j=0;j<q;j++)
        {
            scanf("%d",&x);
            if(x<0)
                x=0;
            sum+=x;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
