#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int m,n,a,k;
    long double x,y;
    cin>>m>>n>>a;
    x=ceil((long double)m/(long double)a);
    y=ceil((long double)n/(long double)a);
    k=x*y;
    cout<<k<<'\n';
    return 0;
}
