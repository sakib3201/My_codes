#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;
    for(i=0;i<13;i++)
    {
        printf("---");
    }
    printf("\n");
    for(k=0;k<5;k++)
    {
       printf("|");
       for(n=0;n<37;n++)
       {
           printf(" ");
       }
       printf("|");
       printf("\n");
    }
    for(i=0;i<13;i++)
    {
        printf("---");
    }
    printf("\n");
    printf("\n");
    return 0;
}
