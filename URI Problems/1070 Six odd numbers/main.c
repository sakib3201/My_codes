#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y;
    scanf("%d",&x);
    if(x%2==0)
    {
        y=x+1;
      printf("%d\n",y);
      for(i=0;i<5;i++)
      {
          y=y+2;
          printf("%d\n",y);
      }
    }
      else
      {
           for(i=0;i<6;i++)
      {
          printf("%d\n",x);
          x=x+2;
      }
      }


  return 0;
}
