#include <stdio.h>
#include <stdlib.h>

int main()
{
    float so,sn;
    int p;
    scanf("%f",&so);
    if(so<=400)
    {
        sn=(so*.15)+so;
        p=15;
    }
    else if(so<=800)
    {
        sn=(so*.12)+so;
        p=12;
    }
    else if(so<=1200)
    {
        sn=(so*.1)+so;
        p=10;
    }
    else if(so<=2000)
    {
        sn=(so*.07)+so;
        p=7;
    }
    else
    {
        sn=(so*.04)+so;
        p=4;
    }
    printf("Novo salario: %.2f\n",sn);
    printf("Reajuste ganho: %.2f\n",(sn-so));
    printf("Em percentual: %d %%\n",p);
    return 0;
}
