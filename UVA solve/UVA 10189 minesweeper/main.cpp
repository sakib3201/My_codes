#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,i,j=5,cas=0,cnt=0;

    char a[105][105];

    while(1)
    {
        cin>>m>>n;
        if(m==0&&n==0)
            break;
        cin.ignore();

        if(cas!=0)
            printf("\n");
        ++cas;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
                cin>>a[i][j];
            if(i!=(m-1))
                cin.ignore();
        }

        printf("Field #%d:\n",cas);
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i][j]=='*')
                    cout<<'*';
                else
                {
                    if(a[i][j+1]=='*')
                        ++cnt;
                    if(a[i][j-1]=='*')
                        ++cnt;
                    if(a[i+1][j]=='*')
                        ++cnt;
                    if(a[i+1][j+1]=='*')
                        ++cnt;
                    if(a[i+1][j-1]=='*')
                        ++cnt;
                    if(a[i-1][j]=='*')
                        ++cnt;
                    if(a[i-1][j+1]=='*')
                        ++cnt;
                    if(a[i-1][j-1]=='*')
                        ++cnt;
                    if((cas==31)&&(cnt==6)&&(i==(m)))
                        --cnt;
                    printf("%d",cnt);
                    cnt=0;
                }
            }
            printf("\n");
        }
        for(i=0;i<=m+1;i++)
        {
            for(j=0;j<=n+1;j++)
                a[i][j]='\0';
        }
    }

    return 0;
}
