#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a1,&a2,&a3);
        if(a1>20||a2>20||a3>20)
            printf("Case %d: bad\n",i);
        else
            printf("Case %d: good\n",i);
    }
    return 0;
}
