#include <stdio.h>

int main()
{
    double A,B,C,x,y,z,D;
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);
    if (y>=x && y>=z)
    {
        A=y;
        if (x>=z)
        {
            B=x;
            C=z;
        }
        else
        {
            B=z;
            C=x;
        }
    }

    else if (z>=y && z>=x)
    {
        A=z;
        if (x>=y)
        {
            B=x;
            C=y;
        }
        else
        {
            B=y;
            C=x;
        }
    }
    else if(x>=y &&x>=z)
    {
        A=x;
        if(y>=z)
        {
            B=y;
            C=z;
        }

        else
        {
            B=z;
            C=y;
        }

    }
    if (A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
    if ((A*A)==(B*B)+(C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if ((A*A)<(B*B)+(C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if ((A*A)>(B*B)+(C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((A==B&&B==C))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((A==B&&B!=C)||(B==C&&C!=A)||(C==A&&C!=B))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
