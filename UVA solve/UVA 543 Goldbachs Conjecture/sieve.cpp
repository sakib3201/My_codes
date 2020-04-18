#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=1000000,i,j;
    static bool mark[1000001]={};
    vector<int>v;
    //sieve
    mark[0]=1;
    mark[1]=1;
    int limit=sqrt(n+1);
    for(int i=4;i<=n;i+=2)
       mark[i]=true;
    for(int i=3;i<=limit;i+=2)
    {
        if(!mark[i])
        {
            for(int j=i*i;j<=n;j+=(2*i))
                mark[j]=true;
        }
    }
    v.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
          v.push_back(i);
        }
    }
    int a,b;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            if(!mark[n-v[i]])
            {
              a=v[i];
              b=n-v[i];
              break;
            }
        }
        printf("%d = %d + %d\n",n,a,b);
    }

    return 0;
}
