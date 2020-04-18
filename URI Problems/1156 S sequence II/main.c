#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=1.0,y=1.0,z=0;
    for(;x<40;x=x+2)
    {
        z=z+(x/y);
        y=y*2;
    }
    printf("%.2f\n",z);
    return 0;
}
