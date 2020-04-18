#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,k,cost=0,total=0,track=0,siz;
    priority_queue < long long int> pq;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            cin>>k;
            k=-1*k;
            pq.push(k);
        }
          while(pq.size()>1)
        {
            cost=pq.top();
            pq.pop();
            cost+=pq.top();
            total+=cost;
            pq.push(cost);
            pq.pop();
        }
        total=-1*total;
        cout<<total<<'\n';
        pq.pop();
        total=0;
        cost=0;
    }
    return 0;
}
