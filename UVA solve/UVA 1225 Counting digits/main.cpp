#include <iostream>

using namespace std;

int main()
{
    int cas,i,a[10]={},n,k;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            k=i;
            while(k!=0)
            {
                ++a[k%10];
                k=k/10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
        for(i=0;i<10;i++)
        {
            a[i]=0;
        }
    }
    return 0;
}
