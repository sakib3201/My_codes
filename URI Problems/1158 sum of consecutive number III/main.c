#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,sum=0,c=0,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        while(c!=y)
        {
            if(x%2!=0)
            {
            sum=sum+x;
            c++;
            }
            x++;
        }
        printf("%d\n",sum);
        c=0;
        sum=0;
        x=0;
    }
    return 0;
}
