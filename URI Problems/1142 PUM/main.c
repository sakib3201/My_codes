#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k=1,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(x=0;x<3;x++)
        {
            printf("%d ",k);
            k++;
        }
        k++;
        printf("PUM\n");
    }
    return 0;
}
