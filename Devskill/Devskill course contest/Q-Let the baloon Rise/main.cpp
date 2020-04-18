#include <bits/stdc++.h>

using namespace std;

int main()
{
    string color,ans;
    map<string,int>m;
    int t,i,maxim;
    while(1)
    {
        maxim=0;
        cin>>t;
        if(t==0)
            break;
        for(i=0;i<t;i++)
        {
            cin>>color;
            ++m[color];
            if(m[color]>maxim)
            {
                maxim=m[color];
                ans=color;
            }
        }
        cout<<ans<<'\n';

    }
    return 0;
}
