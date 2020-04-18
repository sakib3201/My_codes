#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n,q,a[101];
        cin>>n>>q;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<q;i++)
        {
            int j;
            getchar();
            char ch;
            cin>>ch;
            if(ch=='S')
            {
                cin>>j;
                for(int l=0;l<n;l++)
                    a[l]+=j;
            }
            if(ch=='M')
            {
                cin>>j;
                for(int l=0;l<n;l++)
                    a[l]*=j;
            }
            if(ch=='D')
            {
                cin>>j;
                for(int l=0;l<n;l++)
                    a[l]/=j;
            }
            if(ch=='R')
            {
                reverse(a,a+n);
            }
            if(ch=='P')
            {
                int k;
                cin>>j>>k;
                swap(a[j],a[k]);
            }
        }
        cout<<"Case "<<k<<":\n";
        cout<<a[0];
        for(int i=1;i<n;i++)
            cout<<" "<<a[i];
        cout<<endl;
    }
    return 0;
}
