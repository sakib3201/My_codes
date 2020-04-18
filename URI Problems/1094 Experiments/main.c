#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,c=0,r=0,s=0,sum=0,i;
    float perc,perr,pers,sum1;
    char p;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %c",&x,&p);
        if(p=='C')
        {
            c=c+x;
        }
        else if(p=='R')
        {
            r=r+x;
        }
        else if(p=='S')
        {
            s=s+x;
        }
    }

      sum=c+r+s;
      sum1=(float)sum;
      perc=(c/sum1)*100;
      perr=(r/sum1)*100;
      pers=(s/sum1)*100;
     printf("Total: %d cobaias\n",sum);
     printf("Total de coelhos: %d\n",c);
     printf("Total de ratos: %d\n",r);
     printf("Total de sapos: %d\n",s);
     printf("Percentual de coelhos: %.2f %\n",perc);
     printf("Percentual de ratos: %.2f %\n",perr);
     printf("Percentual de sapos: %.2f %\n",pers);

    return 0;
}
