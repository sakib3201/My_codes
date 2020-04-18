#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,c=0,sum=0;
    float avg;
    while(x>=0)
    {
        scanf("%d",&x);
        if(x>=0)
        {
            sum=sum+x;
            c++;
        }
    }
    avg=(float)sum/c;
    printf("%.2f\n",avg);
    return 0;
}
