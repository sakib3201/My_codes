#include<stdio.h>
int main()
{
float s,s1,s2,s3,s4;
    scanf("%f",&s);
    s1=(s-2000)*.08;
        s2=s1+(s-3000)*.18;
        printf("R$ %.2f\n",s2);
        printf("s1=%f s2=%f",s1,s2);
}
