#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,sum=0,c=0;
    while(x!=0)
    {
    scanf("%d",&x);
    if(x==0)
    {
        break;
    }
    while(c<5)
    {
        if(x%2==0)
        {
            sum=sum+x;
            c++;
        }
        x++;
    }
    printf("%d",sum);
    sum=0;
    c=0;
    }
    return 0;
}
