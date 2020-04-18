#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z,sum,c=1;
    scanf("%d",&x);
    do{
        scanf("%d",&z);
    }while(x>=z);
     sum=x;
     while(sum<z)
     {
         x++;
         sum=sum+x;
         c++;
     }
    printf("%d\n",c);
    return 0;
}
