#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y,z,sum;
    printf("enter angle in degree:");
    scanf("%d",&x);
    printf("enter angle in degree:");
    scanf("%d",&y);
    printf("enter angle in degree:");
    scanf("%d",&z);
  if (x+y+z==180)
      printf("its a triangle");
    else
      printf("its not a triangle");
    return 0;
}
