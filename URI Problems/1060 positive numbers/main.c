#include <stdio.h>

int main()
{
    float s[6];
    int i,c;
    for(i=0;i<6;i++)
    {
        scanf("%f",&s[i]);
    }
     for(i=0;i<6;i++)
     {
         if (s[i]>0)
         {
             c++;
         }
     }
     printf("%d valores positivos\n",c);
    return 0;
}
