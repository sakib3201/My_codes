#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a[100];
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[0]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<=10)
        {
            printf("A[%d] = %f\n",i,a[i]);
        }
    }
    return 0;
}
