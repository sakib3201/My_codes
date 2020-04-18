#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,p1,p2;
    float s1,s2,t1,t2,t3;

    scanf("%d%d%f",&x1,&p1,&s1);
    t1 = p1*s1;

    scanf("%d%d%f",&x2,&p2,&s2);
    t2 = p2*s2;

    printf("VALOR A PAGAR: R$ %.2f\n",(t1+t2));
    return 0;
}
