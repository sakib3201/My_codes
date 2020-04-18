#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,number,q,new_number;
    string name;
    map<string,int> m;
    scanf("%d",&t);
    while(t--)
    {
        cin>>q;
        if(q==1)
        {
            cin>>name>>number;
            if(m.find(name)!=m.end())
            {
                new_number=number+m[name];
                m[name]=new_number;
            }
            else
                m.insert(make_pair(name,number));
        }
        if(q==2)
        {
            cin>>name;
            m.erase(name);
        }
        if(q==3)
        {
            cin>>name;
            if(m.find(name)!=m.end())
            {
                cout<<m[name]<<'\n';
            }
            else
                printf("0\n");
        }
    }
    return 0;
}
