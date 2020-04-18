#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,res;

    scanf("%d",&t);
    for(;t>0;--t)
    {
        scanf("%d %d",&x,&y);
        x/=3;
        y/=3;
        res=x*y;
        printf("%d\n",res);
    }

    return 0;
}
