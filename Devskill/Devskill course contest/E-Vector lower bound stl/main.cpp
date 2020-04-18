#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t,q,x,y;
    vector <long int> v;
    vector<long int>::iterator l;
    cin>>t;
    while(t--)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>t;
    while(t--)
    {
        cin>>x;
        l=lower_bound(v.begin(),v.end(),x);
        if((v.at(l-v.begin()))==x)
           cout<<"Yes "<<(l-v.begin())+1<<endl;
        else
            cout<<"No "<<(l-v.begin())+1<<'\n';
    }
    return 0;
}
