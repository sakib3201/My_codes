#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
    int sum=0, n, i;
    string str="";
    cin>>n;
    for(i=0; n>0; i++)
    {
        if(n%2==0)
            str+='0';
        else
            str+='1';
        n = n/2;
    }
    str+='0';
    int siz=str.size();
    reverse(str.begin(), str.end());
    next_permutation(str.begin(),str.end());
    for(i=siz-1;i>=0;i--)
    {
        sum = sum + (((int)(str[i]-'0'))*pow(2,siz-1-i));
    }
    cout<<"Case "<<l<<": "<<sum<<'\n';
    }
}
