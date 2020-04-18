#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k=0,n;
    scanf("%d",&n);

    for(i=0;i<10000;i++)
    {
        if((k%n)==2)
        {
            printf("%d\n",i);
        }
        k++;
    }
    return 0;
}
