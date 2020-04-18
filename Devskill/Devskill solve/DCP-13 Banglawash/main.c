#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,b1,b2,b3,b4,p1,p2,p3,p4,m1,m2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&b1,&b2,&p1,&p2);
        scanf("%d %d %d %d",&b3,&b4,&p3,&p4);
        if(((b1+b2)>(p1+p2))&&((b3+b4)>(p3+p4)))
            printf("Banglawash\n");
        else
            printf("Miss\n");


    }
    return 0;
}
