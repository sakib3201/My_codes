#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,p=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        for(int j=2;j<x-1;j++)
        {
            if(x%j==0)
            {
                p++;
            }

        }

     if(p==0)
      {
        printf("%d eh primo\n",x);
      }
     else
      {
        printf("%d nao eh primo\n",x);
      }
      p=0;
    }

    return 0;
}
