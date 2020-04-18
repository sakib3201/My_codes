#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        unsigned long long int w,m,n,sq;
        cin>>w;
        sq = sqrt(w);
        cout<<"Case "<<k<<": ";
        if(w%2!=0)
            printf("Impossible\n");
        else
        {
            for(long long int i=2;i<=w;i=i+2)
            {
                m=w/i;
                if(m%2!=0 && ((m*i)==w))
                {
                    n=i;
                    break;
                }
            }
            cout<<m<<" "<<n<<'\n';
        }

    }
    return 0;
}
