#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,x,y,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        p=(y*log10(x))+1;
        printf("%d\n",p);
    }

    return 0;
}
