#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,t,total=0,point,i;
    map<string,long long int>m;
    string word;
    cin>>n>>t;
    getchar();
    for(i=0;i<n;i++)
    {
    cin>>word>>point;
    m[word]=point;
    }
    while(t--)
    {
        while(1)
        {
        cin>>word;
        if(word==".")
            break;
        total+=m[word];
        }
        cout<<total<<'\n';
        total=0;
    }
    return 0;
}
