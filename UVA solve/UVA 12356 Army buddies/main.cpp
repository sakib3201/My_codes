#include <bits/stdc++.h>

using namespace std;

int main()
{
    int left[100002],right[100002];
    int i,s,b,le,re;

    while(scanf("%d %d",&s,&b),s||b)
    {
        if(s==0&&b==0)
            break;
        for(i=1;i<=s;i++)
        {
            left[i]=i-1;
            right[i]=i+1;
        }
        left[1]=-1;
        right[s]=-1;
        for(i=0; i<b; i++)
        {
            scanf("%d %d",&le,&re);
            left[right[re]]=left[le];
            right[left[le]]=right[re];
            if(left[le]!=-1)
                printf("%d ",left[le]);
            else
                printf("* ");
            if(right[re]!=-1)
              printf("%d\n",right[re]);
            else
                printf("*\n");
        }
        printf("-\n");

    }

    return 0;
}
