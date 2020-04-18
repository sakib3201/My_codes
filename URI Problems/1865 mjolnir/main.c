#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    char a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s %*d",&a);
    if(a[0]=='T'&&a[2]=='o')
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    }
    return 0;
}
