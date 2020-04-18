#include <stdio.h>

int main()
{
    int i,n;
    n=1;
    while(n!=0)
     {
        scanf("%d",&n);
        if(n!=0)
        {
         for(i=0; i<(n-1);i++)
    {
        printf("%d ",(i+1));
    }
        printf("%d\n",(i+1));
     }
     }
    return 0;

}
