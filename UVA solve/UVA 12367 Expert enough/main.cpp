#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,t,q,d,l[10000]={},h[10000]={},num,j,c=0,in,k;
    string name[10000];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        if(k!=0)
            printf("\n");

        scanf("%lld",&d);
        getchar();
        for(i=0;i<d;i++)
        {
            cin>>name[i]>>l[i]>>h[i];
        }
        scanf("%lld",&q);
        for(i=0;i<q;i++)
        {
            c=0;
            scanf("%lld",&num);
            for(j=0;j<d;j++)
            {
                if(num>=l[j]&&num<=h[j])
                {
                    in=j;
                    ++c;
                }
            }
            if(c==1)
                cout<<name[in]<<'\n';
            else
                cout<<"UNDETERMINED"<<'\n';
        }
    }

    return 0;
}
