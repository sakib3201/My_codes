#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2,m1,m2,h1,h2,d1,d2,s=0,m=0,h=0,d=0,sum,sum2,sum1;
    scanf("%*s %d",&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%*s %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    sum1=s1+(m1*60)+(h1*3600)+(d1*3600*24);
    sum2=s2+(m2*60)+(h2*3600)+(d2*3600*24);

    sum=sum2-sum1;

    d=sum/86400;
    sum=sum%86400;
    h=sum/3600;
    sum=sum%3600;
    m=sum/60;
    sum=sum%60;
    s=sum;

    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    return 0;
}
