#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase,n,arr[20000],total;
    scanf("%d",&testcase);
    while(testcase--)
    {
        total=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=n-3;i>=0;i-=3)
            total+=arr[i];
        printf("%d\n",total);
    }
    return 0;
}
