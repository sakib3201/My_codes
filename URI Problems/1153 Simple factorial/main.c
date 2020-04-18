#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fac=1,p;
    scanf("%d",&n);
    p=n;
    for(i=0;i<n;i++)
    {
        fac=fac*p;
        p--;
    }
      printf("%d\n",fac);

      return 0;
}
