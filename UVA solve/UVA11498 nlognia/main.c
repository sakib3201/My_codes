#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n=0,x=0,y=0,k=0,p=0,q=0;
    while(1)
    {
        scanf("%d",&n);
       if(n==0)
       {
           break;
       }
     scanf("%d %d",&p,&q);
    for(i=0;i<n;i++)
      {
       scanf("%d %d",&x,&y);

        if(x==p||y==q)
        {
            printf("divisa\n");
        }
        else if(x>p&&y>q)
        {
            printf("NE\n");
        }
        else if(x<p&&y>q)
        {
            printf("NO\n");
        }
        else if(x<p&&y<q)
        {
            printf("SO\n");
        }
        else if(x>p&&y<q)
        {
            printf("SE\n");
        }
      }
    }
    return 0;
}
