#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,q,r,s,med,x,avg;
    scanf("%f %f %f %f",&p,&q,&r,&s);
    med=((p*2)+(q*3)+(r*4)+s)/10;
    printf("Media: %.1f\n",med);
    if(med>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(med<=5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&x);
        printf("Nota do exame: %.1f\n",x);
        avg=(med+x)/2;
        if(avg>=5)
        {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n",avg);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",avg);
        }
    }
    return 0;
}
