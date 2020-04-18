#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,a,sum;
    int c=0;
    while(c!=2)
    {
        scanf("%f",&k);
        if((k>=0)&&(k<=10))
        {
            c++;
            a=k/2.0;
            sum=sum+a;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f",sum);




    return 0;
}
