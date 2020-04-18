#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,j,temp;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(a[0]<(a[1]+a[2]))
        printf("S\n");
    else if(a[1]<(a[2]+a[3]))
        printf("S\n");
    else
            printf("N\n");

    return 0;
}
