#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,x,m,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d",&x);
        k=sqrt(x);
        k++;
        if(x==0)
            printf("No\n");
        else if(x==1)
            printf("No\n");
        else if(x==2)
            printf("Yes\n");
        else if(x%2==0)
            printf("No\n");
        else if(x>2)
        {
        for(m=3;m<k+1;)
         {
            if(x%m==0)
            {
                printf("No\n");
                m=k+2;
                c++;
            }
           else
           m=m+2;
         }
          if(c==0)
            printf("Yes\n");
        }
    }
    return 0;
}
