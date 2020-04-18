#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[1000],i=0,min,min_pos,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       if(min>arr[i])
       {
           min=arr[i];
           min_pos=i;
       }
   }
   printf("Menor valor: %d\n",min);
   printf("Posicao: %d\n",min_pos);

    return 0;
}
