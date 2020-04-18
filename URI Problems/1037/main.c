#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,t;
    int z;
    scanf("%d %f",&z,&y);
    switch (z)
    {
    case 1:
        x=4.00;
        break;
    case 2:
        x=4.50;
        break;
    case 3:
        x=5.00;
        break;
    case 4:
        x=2.00;
        break;
    case 5:
        x=1.50;
        break;
    }
    t=x*y;

    printf("Total: R$ %.2f\n",t);
    return 0;
}
