#include <bits/stdc++.h>
double a[1000005]={};
using namespace std;

int main()
{
    int t;
    for(int i = 1; i<=1000005;i++)
        a[i]=log(i)+a[i-1];
    scanf("%d",&t);
    for(int l=1;l<=t;l++)
    {
        int n,b;
        scanf("%d %d",&n,&b);
        long long int ans=a[n]/log(b)+1;
        printf("Case %d: %lld\n",l,ans);
    }
    return 0;
}
