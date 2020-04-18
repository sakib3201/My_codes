#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum=0,i,h,l;
    scanf("%d",&x);
    scanf("%d",&y);

    if(x>y)
    {
        l=y;
        h=x;
    }
    else
        {
            h=y;
            l=x;
        }

    for(i=(l+1);i<h;i++)
    {
        if(i%2==1||i%2==-1)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
