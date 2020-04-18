#include <stdio.h>
#include <stdlib.h>

int main()
{
    float z;
    int i,j;
    int x,y;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
    scanf("%d %d",&x,&y);
    if(y!=0)
    {
        z=(float)x/y;
        printf("%.1f\n",z);
    }
    else
    {
        printf("divisao impossivel\n");
    }
    }


    return 0;
}
