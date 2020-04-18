#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,matrix[11][11],m,t,temp,testcase,n,a,b,k;
    string word;
    scanf("%d",&t);
    for(testcase=1;testcase<=t;testcase++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                scanf("%1d",&matrix[i][j]);
            }
        scanf("%d",&m);
        getchar();
        for(k=0;k<m;k++)
        {
            cin>>word;
            if(word=="row")
            {
                scanf("%d %d",&a,&b);
                getchar();
                for(i=0;i<n;i++)
                swap(matrix[a-1][i],matrix[b-1][i]);
            }
            else if(word=="col")
            {
                scanf("%d %d",&a,&b);
                getchar();
                for(i=0;i<n;i++)
                swap(matrix[i][a-1],matrix[i][b-1]);
            }
            else if(word=="inc")
            {
                for(i=0;i<n;i++)
                    for(j=0;j<n;j++)
                {
                    ++matrix[i][j];
                    if(matrix[i][j]==10)
                    matrix[i][j]=0;
                }
            }
            else if(word=="dec")
            {
                for(i=0;i<n;i++)
                    for(j=0;j<n;j++)
                {
                    --matrix[i][j];
                    if(matrix[i][j]==-1)
                    matrix[i][j]=9;
                }
            }
            else if(word=="transpose")
            {
                for(i=0;i<n;i++)
                    for(j=i;j<n;j++)
                    {
                    swap(matrix[i][j],matrix[j][i]);
                    }
            }
        }
        printf("Case #%d\n",testcase);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d",matrix[i][j]);
            printf("\n");
        }
         printf("\n");
    }
    return 0;
}
