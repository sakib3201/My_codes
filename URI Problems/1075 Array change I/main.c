#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[21],temp,i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&n[19-i]);
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
