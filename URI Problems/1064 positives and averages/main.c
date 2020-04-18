#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,p=0;
   float av=0,n;
   for(i=0;i<6;i++)
   {
       scanf("%f",&n);
       if(n>=0)
       {
           p++;
           av=av+n;
       }
   }
   printf("%d valores positivos\n",p);
   printf("%.1f\n",(av/p));

    return 0;
}
