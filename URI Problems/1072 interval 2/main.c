#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x,in,out,s[10000];
    in=0;
    out=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if((s[i]>10||s[i]==10)&&(s[i]<20||s[i]==20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
