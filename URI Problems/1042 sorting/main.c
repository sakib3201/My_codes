#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,s[3],r[3];
    i=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&s[i]);
    }
    r[0]=s[0];
    r[1]=s[1];
    r[2]=s[2];
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;j++)
        {
        if (s[i]<s[j])
        {
            k=s[i];
            s[i]=s[j];
            s[j]=k;
        }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n",s[i]);
    }
    printf("\n");
      for(i=0;i<3;i++)
    {
        printf("%d\n",r[i]);
    }
    return 0;
}
