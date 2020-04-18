#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10];
    int don=0,sum=0,n,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a);
        if(a[0]=='d')
        {
            scanf("%d",&don);
            sum=sum+don;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
