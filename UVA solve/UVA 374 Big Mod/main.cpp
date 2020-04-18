#include <iostream>

using namespace std;

int bigmod(int b,int p,int m)
{

    if(p==0)
        return 1;

    int ans = bigmod(b,p/2,m);

    ans = (ans*ans)%m;

    if(p%2==1)
        ans = ((ans%m)*(b%m))%m;

    return ans;
}
int main()
{
    int ans=1,b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)==3)
    {
        ans=bigmod(b,p,m);
        cout<<ans<<'\n';
    }
    return 0;
}
