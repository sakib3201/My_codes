#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,i,j;
    vector<int>v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&j);
            v.push_back(j);
        }
        int m;
        m=n-k+1;
        int o;
        auto it=v.begin();
        for(i=0;i<m;i++)
         {
             cout<<*(max_element(it,it+k))<<" ";
             it++;
         }
         cout<<'\n';
        v.clear();
    }

    return 0;
}
