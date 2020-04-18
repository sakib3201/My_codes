#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[7];
    int i=0;
    while(1)
    {
        scanf("%s",&a);
        i++;
        if(a[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if (a[0]=='U')
        {
             printf("Case %d: Hajj-e-Asghar\n",i);
        }
        else if (a[0]=='*')
            break;
    }
    return 0;
}
