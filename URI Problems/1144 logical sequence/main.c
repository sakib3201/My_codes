#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,i1,i2,i3,i4;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        i1=i*i;
        i2=i*i*i;
        i3=i1+1;
        i4=i2+1;
      printf("%d %d %d\n",i,i1,i2);
      printf("%d %d %d\n",i,i3,i4);
    }
    return 0;
}
