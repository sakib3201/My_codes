#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,j,i,n,k,swp=0,train[50]={},tmp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&train[j]);
        }

     for(k=1;k<n;k++)
     {
     for(j=n-1;j>=k;j--)
     {
       if(train[j]<train[j-1])
       {
         tmp=train[j];
         train[j]=train[j-1];
         train[j-1]=tmp;
            ++swp;
       }
     }
     }
     printf("Optimal train swapping takes %d swaps.\n",swp);
    swp=0;
    }
    return 0;
}
