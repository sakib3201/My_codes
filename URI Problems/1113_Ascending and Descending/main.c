#include <stdio.h>

int main()
{
    int x,i=0;
    scanf("%d",&x);
    start:
    if(x!=2002)
    {
        printf("Senha Invalida\n");
         scanf("%d",&x);
         goto start;
    }
    else
        {
          printf("Acesso Permitido\n");
          i++;
        }

    return 0;
}
