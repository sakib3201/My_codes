#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,c=0;
    scanf("%d %d",&j,&n);
    while(c!=n)
    {
        for(k=0;k<(j-1);k++)
        {    c++;
            printf("%d ",c);
        }
        c++;
        printf("%d\n",c);
    }


    return 0;
}
