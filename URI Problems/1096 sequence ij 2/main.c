#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d",i);
        if(i==2)
        {
            i=3;
        }
        else if(i==5)
        {
            i=9;
        }
    }
    return 0;
}
