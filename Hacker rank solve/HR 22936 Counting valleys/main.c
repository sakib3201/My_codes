#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int phite=0,chite=0,n,i=0,valley=0;
    char step;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        phite=chite;
        scanf("%c",&step);
        if(step=='U')
            {
                chite++;
            }
        else if(step=='D')
            chite--;
        if(phite==0&&chite==-1)
            valley++;
    }
    printf("%ld",valley);
    return 0;
}
