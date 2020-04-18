#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[27]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4,1};
    int test_case,coun,len,sum,i,j;
    char b[101];

    scanf("%d",&test_case);
    cin.ignore();

    for(int k=1;k<=test_case;k++)
    {
        gets(b);
        len=strlen(b);
        sum=0;
        for(i=0;i<len;i++)
        {
            if(b[i]!=' ')
            j=b[i]-'a';
            else
                j=26;

            sum+=a[j];
        }
        printf("Case #%d: %d\n",k,sum);
    }
    return 0;
}
