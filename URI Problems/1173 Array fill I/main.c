#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10],i,v;
    scanf("%d",&v);
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,v);
        v=v*2;
    }
    return 0;
}
