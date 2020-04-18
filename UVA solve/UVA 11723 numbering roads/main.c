#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,n,x,i=0;
    while(1)
    {
       scanf("%d %d",&r,&n);
       if(r==0)
        break;
       i++;
       if(r>((n*26)+n))
       {
           printf("Case %d: impossible\n",i);
       }
       else
       {
           x=(r-n)/n;
           if((x*n)+n<r)
           {
             x++;
           }
           printf("Case %d: %d\n",i,x);
       }
    }
    return 0;
}
