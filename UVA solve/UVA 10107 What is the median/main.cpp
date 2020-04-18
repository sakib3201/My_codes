#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a[100001]={},n=1,median,i;
    while(scanf("%lld",&a[n])!=EOF)
    {
        sort(a,a+n+1);

        if(n==1)
        {
            median=a[1];
        }
        else if (n%2==0)
        {
            median=(a[((n/2)+1)]+a[(n/2)])/2;
        }
        else
        {
            median=a[(n/2)+1];
        }
        cout<<median<<'\n';
        n++;
    }

    return 0;
}
