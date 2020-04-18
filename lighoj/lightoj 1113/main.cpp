#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    getchar();
    for(int k=1;k<=t;k++)
    {
        cout<<"Case "<<k<<":\n";
        stack<string> f,b;
        string str,url,cur;
        f.push("http://www.lightoj.com/");
        while(1)
        {
            cin>>str;
            string temp;
            if(str=="VISIT")
            {
                cin>>url;
                if(f.empty())
                    cout<<"Ignored"<<'\n';
                else
                    {
                       temp=f.top();
                       f.pop();
                       b.push(temp);
                       while(!f.empty())
                       {
                           f.pop();
                       }
                       f.push(url);
                    }
                cout<<f.top()<<'\n';
            }
            else if(str=="BACK")
            {
                if(b.empty())
                    cout<<"Ignored"<<'\n';
                else
                {
                    temp=b.top();
                    b.pop();
                    f.push(temp);
                    cout<<f.top()<<'\n';
                }
            }
            else if(str=="FORWARD")
            {
                if(f.size()<2)
                    cout<<"Ignored"<<'\n';
                else
                {
                    temp=f.top();
                    f.pop();
                    b.push(temp);
                    cout<<f.top()<<'\n';
                }
            }
            else if(str=="QUIT")
                break;

        }
    }
    return 0;
}
