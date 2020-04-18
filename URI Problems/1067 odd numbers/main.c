#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x,y;
    n=1;
    i=0;
    scanf("%d",&x);
    y=x+1;
    while(n<y)
    {
        i++;
        printf("%d\n",n);
        n=n+2;
    }
    return 0;
}
