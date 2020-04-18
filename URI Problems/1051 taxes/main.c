#include <stdio.h>
#include<math.h>
int main()
{
    float s,s1,s2,s3,s4;
    scanf("%f",&s);

    if(s<=2000)
    {
        printf("Isento\n");
    }
    else if(2000<s&&s<3000.00)
    {

        printf("R$ %.2f\n",((s-2000)*.08));
    }
    else if(3000<s&&((s<4500)||(s==4500)))
    {
        s1=80;
        s2=(s-3000)*.18;
        printf("s1=%.2f\n",s1);
        printf("s2=%.2f\n",s2);
        printf("R$ %.2f\n",(s2+s1));
    }
    else if (4500<s)
    {
        printf("R$ %.2f\n",(((s-4500)*.28)+350));
    }

    return 0;
}
