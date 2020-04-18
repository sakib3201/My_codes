#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=1,sum=0,i;
    while(x>0&&y>0)
    {
        sum=0;
        scanf("%d",&x);
        scanf("%d",&y);
        if(x>0&&y>0)
        {
            if(x>y)
            {
               for(i=y;i<=x;i++)
               {
                   printf("%d ",i);
                   sum=sum+i;
               }
               printf("Sum=%d\n",sum);
            }
            else
            {
                 for(i=x;i<=y;i++)
               {
                   printf("%d ",i);
                   sum=sum+i;
               }
               printf("Sum=%d\n",sum);
            }

        }




    }
    return 0;
}
