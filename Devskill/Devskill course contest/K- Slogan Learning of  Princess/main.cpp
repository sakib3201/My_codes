#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    string slogan1,slogan2,s;
    map<string,string>slogan;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        getline(cin,slogan1);
        getline(cin,slogan2);
        slogan[slogan1]=slogan2;
        slogan[slogan2]=slogan1;
    }
    scanf("%d",&q);
    getchar();
    while(q--)
    {
        getline(cin,s);
        cout<<slogan[s]<<endl;
    }
    return 0;
}
