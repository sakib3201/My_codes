#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,a,mn=101,mx=0;

    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(mn>a)
                mn=a;
            if(mx<a)
                mx=a;
        }
        printf("%d\n",(2*(mx-mn)));
        mx=0;
        mn=101;
    }


    return 0;
}
