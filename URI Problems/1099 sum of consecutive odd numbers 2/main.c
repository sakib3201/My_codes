#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0,y=0,x=0,l=0,i=0,n=0,k=0,sum=0;

    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
    scanf("%d %d",&x,&y);
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
    printf("%d\n",sum);
    sum=0;
    }
    return 0;
}
