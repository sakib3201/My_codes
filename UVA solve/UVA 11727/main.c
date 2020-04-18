#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y,z,n;
    scanf("%d",&n);
    for(i=1;i<(n+1);i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(((y>x)&&(x>z))||((z>x)&&(x>y)))
        {
            printf("Case %d: %d\n",i,x);
        }
         else if(((x>y)&&(y>z))||((z>y)&&(y>x)))
        {
            printf("Case %d: %d\n",i,y);
        }
        else if(((x>z)&&(z>y))||((y>z)&&(z>x)))
        {
            printf("Case %d: %d\n",i,z);
        }
    }

    return 0;
}
