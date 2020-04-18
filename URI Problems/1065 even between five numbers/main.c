#include <stdio.h>
#include <stdlib.h>

int main()
{
 int r[5],x,i;
 x=0;
 for(i=0;i<5;i++)
  {
    scanf("%d",&r[i]);
    if (r[i]%2==0)
    {
      x++;
    }
  }
  printf("%d valores pares\n",x);
    return 0;
}
