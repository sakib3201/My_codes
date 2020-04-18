#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,i,j[100],c=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&j[i]);
    }
    for(i=0;i<m;i++)
    {
        if(j[i]>=j[n-1]&&j[i]>0)
            c++;
    }
    printf("%d\n",c);

    return 0;
}
