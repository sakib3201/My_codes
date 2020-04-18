#include <iostream>

using namespace std;
int divcount(int n);
int main()
{
    int t,a,b;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
       cin>>a>>b;
       printf("Case %d: %d\n",k,divcount(b)-divcount(a-1));
    }
    return 0;
}

int divcount(int n)
{
    if(n==0)
        return 0;
    int ans = (n/3)*2;
    if(n%3==2)
        ++ans;
    return ans;
}
