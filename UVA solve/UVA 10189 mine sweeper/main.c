#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,count=0,cas;
    char a[101][101]= {},garbage;

    while(scanf("%d %d %*c",&m,&n)==3)
    {
        if(m==0&&n==0)
            break;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%c",&a[i][j]);
            }

        }

        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i][j]=='*')
                    printf("*");
                else
                {
                    if (a[i+1][j]=='*')
                        ++count;
                    if (a[i-1][j]=='*')
                        ++count;
                    if (a[i+1][j+1]=='*')
                        ++count;
                    if (a[i-1][j+1]=='*')
                        ++count;
                    if (a[i+1][j-1]=='*')
                        ++count;
                    if (a[i-1][j-1]=='*')
                        ++count;
                    if (a[i][j+1]=='*')
                        ++count;
                    if (a[i][j-1]=='*')
                        ++count;
                    printf("%d",count);
                }
                count=0;
            }
            printf("\n");
        }

    }


    return 0;
}
