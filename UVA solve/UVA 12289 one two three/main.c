#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],sum=0,i,ar_count=6;
     for (i=0;i<ar_count;i++)
     {
         scanf("%d",&a[i]);

     }
     for (i = 0; i <ar_count; i++) {
        sum=sum+a[i];
     }
    printf("%d",sum);
    return 0;
}
