#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,y;
    while (cin >> k)
    {
        vector<pair<int, int> > sol;
        for (y=k+1;y<=2*k;++y)
        {
            if ((k*y)%(y-k)==0)
                sol.push_back(make_pair((k*y)/(y-k),y));
        }
        cout<<sol.size()<<'\n';
        for (size_t i = 0; i<sol.size();++i)
            cout <<"1/"<<k<<" = 1/"<< sol[i].first<<" + 1/"<<sol[i].second<<'\n';
    }
    return 0;
}
