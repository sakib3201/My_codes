#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,M,N,x,c=0;
    set <int> a;


    while(scanf("%d %d",&M,&N)==2&&(M!=0)&&(N!=0))
    {
        c=0;
        a.clear();
        for(i=0; i<M; i++)
            {
            scanf("%d",&x);
            a.insert(x);
            }
        for(i=0; i<N; i++)
            {
            scanf("%d",&x);
            if(a.count(x))
                ++c;
            }
        printf("%d\n",c);
    }
    return 0;
}
