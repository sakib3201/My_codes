#include <stdio.h>
int main()
{
    int h1,h2,m1,m2,h=0,m=0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if((h1==h2)&(m1==m2))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
    if(m2>m1)
    {
        m=m2-m1;
    }
    else if(m1==m2)
    {
        m=0;
    }
    else
    {
        m=(60-m1)+m2;
        if(h1!=h2)
        {
            h--;
        }
    }
    if((h1==h2)&(m1>m2))
    {
        h=23;
    }
    else if((h1==h2)&(m1<m2))
    {
        h=0;
    }
    else if(h1<h2)
    {
        h=h+h2-h1;
    }
    else if(h1>h2)
    {
        h=h+24+h2-h1;
    }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}

