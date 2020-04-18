#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double r,ans,pi,square,circle;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        circle = 2*acos(0.0)*r*r;
        square = 4.0*r*r;
        ans = square - circle;
        printf("Case %d: %.2f\n",i,ans);
    }
    return 0;
}
