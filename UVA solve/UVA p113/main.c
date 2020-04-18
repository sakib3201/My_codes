#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z=0;
    scanf("%d",&x);
    scanf("%d",&y);
    while(y!=1)
    {
        z++;
        y=y/x;
    }
    printf("%d",z);
    return 0;
}
