#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=0,current,n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&current);
            if(current>max)
            {
                max=current;
            }
        }
        if(max<10)
            printf("1\n");
        else if(max<20)
            printf("2\n");
        else
            printf("3\n");
        max=0;
    }
    return 0;
}
