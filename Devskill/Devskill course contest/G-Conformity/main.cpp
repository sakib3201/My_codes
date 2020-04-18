#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,a4,a5,t,maximum=0,counter=0;
    set<int>key;
    set<set<int>>combo;
    map<set<int>,int>hfreq;
    while(1)
    {
         hfreq.clear();
        scanf("%d",&t);
        maximum=0;
        if(t==0)
            break;
        while(t--)
        {
            key.clear();
            scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
            key.insert(a1);
            key.insert(a2);
            key.insert(a3);
            key.insert(a4);
            key.insert(a5);
            ++hfreq[key];
            if(hfreq[key]>maximum)
                    maximum=hfreq[key];
        }
        for(auto it=hfreq.begin();it!=hfreq.end();it++)
        {
            if(it->second==maximum)
                counter=counter+(it->second);
        }
        cout<<counter<<endl;
        counter=0;
    }
    return 0;
}
