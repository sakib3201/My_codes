#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,highest,x;
    vector<string> ans;
    string input;

    scanf("%d",&t);
    getchar();

    for(int j=1;j<=t;j++)
    {
        ans.clear();
        highest=0;
        for(i=0;i<10;i++)
        {
            cin>>input>>x;
            if(x>highest)
            {
                ans.clear();
                highest=x;
                ans.push_back(input);
            }
            else if(x==highest)
            {
                ans.push_back(input);
            }
        }
        cout<<"Case #"<<j<<":"<<'\n';
        int siz=(int)ans.size();
        for(i=0;i<siz;i++)
        {
            cout<<ans[i]<<'\n';
        }

    }
    return 0;
}
