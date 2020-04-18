#include <stdio.h>
#include <stdlib.h>

int main()
{   float A,B,C,tri,tra;
    scanf("%f %f %f",&A,&B,&C);
    if(A<(B+C)&&B<(A+C)&&C<(A+B))
    {
        tri=A+B+C;
        printf("Perimetro = %.1f\n",tri);
    }
    else
    {
        tra=((A+B)/2)*C;
        printf("Area = %.1f\n",tra);
    }
    return 0;
}
