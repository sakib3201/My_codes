#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,j,tot,pd=0,e,r;
    while(scanf("%d",&tot)!=EOF)
    {
        scanf("%d",&e);
        for(i=0;i<e;i++)
        {
        scanf("%d",&r);
        pd+=r;
        }
     k=tot/pd;
     j=tot%pd;
     if(j!=0)
     k++;
     if(k!=1)
     printf("Project will finish within %d days.\n",k);
     else
        printf("Project will finish within 1 day.\n");
     i=0;
     pd=0;
    }
    return 0;
}
