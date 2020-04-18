#include <stdio.h>
int main()
{
    int x,y,i,k;
    scanf("%d",&x);
    scanf("%d",&y);
    if(y>=x)
    {
        while(x!=(y-1))
    {
        x++;
        if((x%5==2)||(x%5==3))
         {
           printf("%d\n",x);
         }
    }
    }
     else if(x>=y)
    {
        while(y!=(x-1))
        {
            y++;
        if((y%5==2)||(y%5==3))
         {
           printf("%d\n",y);
         }

        }


    }

    return 0;
}
