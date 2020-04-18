#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,C,x,y,z,D;
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&z);
   if (y>x)
   {
      A=y;
      if (x>z)
     {B=x;
      C=z;}
       else
      {
          B=z;
          C=x;
      }

   }
    printf("first: %lf %lf %lf\n",A,B,C);
   }


