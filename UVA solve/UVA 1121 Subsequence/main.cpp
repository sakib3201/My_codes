#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long int sum;
    vector<long int>v;
    while(scanf("%d %ld",&n,&sum)!=EOF)
    {
    long int x,maxim=0,m=1000000,low=0,high=0;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            maxim+=x;
            while(maxim-v[low]>=sum&&low<i)
            {
                maxim-=v[low];
                ++low;
                if(m>(i-low+1))
                    m=(i-low+1);
            }

        }
     if(m==1000000)
        m=0;
     cout<<m<<'\n';
     v.clear();
    }
    return 0;
}
