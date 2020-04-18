#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,n,qw=0,pw=0,d=0,c=0,x=1;

    while(x==1)
    {
        scanf("%d %d",&p,&q);
        printf("Novo grenal (1-sim 2-nao)\n");
        c++;
        if(p>q)
        {
            pw++;
        }
        else if(q>p)
        {
            qw++;
        }
        else
        {
            d++;
        }
        scanf("%d",&x);
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",pw);
    printf("Gremio:%d\n",qw);
    printf("Empates:%d\n",d);
    if(pw>qw)
    {
    printf("Inter venceu mais\n");
    }
    else if(qw>pw)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }
    return 0;
}
