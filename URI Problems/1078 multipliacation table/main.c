#include <stdio.h>


int main()
{
    int i,x;
    scanf("%d",&x);
    for(i=1;i<11;i++)
    {
        printf("%d x %d = %d\n",i,x,(i*x));
    }
    return 0;
}
