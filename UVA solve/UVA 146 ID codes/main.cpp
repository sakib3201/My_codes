#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    while(cin>>name,name!="#")
    {
        if(next_permutation(name.begin(),name.end()))
           cout<<name<<'\n';
        else
            printf("No Successor\n");
    }
    return 0;
}
