#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b,sum;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a%2==0)
            a++;
        if(b%2==0)
            b--;
        sum=((a+b)/2)*(((b-a)/2)+1);
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
