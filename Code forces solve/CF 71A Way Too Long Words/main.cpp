#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase,i,k,j;
    string s;

    cin>>testcase;
    for(i=0;i<testcase;i++)
    {
        cin>>s;
        k=s.size();
        if(k<11)
        cout<<s<<'\n';
        else
        cout<<s.at(0)<<k-2<<s.at(k-1)<<'\n';
    }


    return 0;
}
