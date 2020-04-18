#include <stdio.h>

int main()
{
    int x,y,c;
    scanf("%d %d",&x,&y);
    c=0;
    if(x==y)
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else
    {
    while(x!=y)
    {
        c++;
        x++;
        if(x==24)
        {
            x=0;
        }
    }
   printf("O JOGO DUROU %d HORA(S)",c);}
    return 0;
}
