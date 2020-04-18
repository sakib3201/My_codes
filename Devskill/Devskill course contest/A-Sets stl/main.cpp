#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x;
    set<long long int>s;
    int t , q;
    //q diye koto number query tar input nisi
    //s hoilo je set e element rakhsi
    //t hoilo kotobar input nibo control korte
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %lld",&q,&x);
        if(q==1)
        {
            s.insert(x);
        }
        if(q==2)
        {
            s.erase(x);
        }
        if(q==3)
        {
            if(s.find(x)!=s.end())
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}
