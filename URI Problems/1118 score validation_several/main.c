#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x=1,c;
     double n1,n2,n,sum=0;
       while(x==1)
     {
         c=0;
         while(c==0)
         {
         scanf("%lf",&n);
         if(n>=0&&n<=10)
          {
             n1=n;
             c++;
          }
         else
          {
             printf("nota invalida\n");
          }
         }
         while(c==1)
         {
         scanf("%lf",&n);
         if(n>=0&&n<=10)
         {
             n2=n;
             c++;
         }
         else
          {
             printf("nota invalida\n");
          }
         }
         sum=(n1+n2)/2.0;
         printf("media = %.2lf\n",sum);
         if(c==2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&x);
                while(x<1||x>2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&x);
                }
            }
     }
      return 0;
}
