#include<bits/stdc++.h>
using namespace std;
bool prime(long int x){

 if(x%2==0)
    return false;
 for(long int i=3;i*i<=x;i+=2)
 {
     if(x%i==0)
        return false;
 }
  return true;
}
long long int bigmod(long long int b,long long int p,long long int m)
{

    if(p==0)
        return 1;

    long long int ans = bigmod(b,p/2,m);

    ans = (ans*ans)%m;

    if(p%2==1)
        ans = ((ans%m)*(b%m))%m;

    return ans;
}
int main()
{
    long long int p,a,ans=1;

    while(1)
    {
        scanf("%lld %lld",&p,&a);
        if(p==0&&a==0)
            break;
        if(prime(p)||(bigmod(a,p,p)!=a))
            printf("no\n");
        else
            printf("yes\n");
    }

    return 0;
}

