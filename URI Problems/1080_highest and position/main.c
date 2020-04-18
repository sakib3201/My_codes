#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],b[5],i,j,c=0,swap;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
          if(a[i]<a[j])
          {
              swap=a[i];
              a[i]=a[j];
              a[j]=swap;
          }

    }
    }

    i=0;
    while(a[0]!=b[i])
    {
        i++;
    }
    printf("%d\n",i+1);
        return 0;
}
