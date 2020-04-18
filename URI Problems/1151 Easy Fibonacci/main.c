#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,n1=0,n2=1,n3=0;
    scanf("%d",&n);
    for(i=0;i<(n-1);i++)
    {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("%d\n",n1);




    return 0;
}
