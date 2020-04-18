#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string a;
        stack<char>bracket;
        getline(cin,a);
        int siz=a.size();

          for(int i=0; i<siz; i++)
            {
                if(!bracket.empty()&&(a[i]==')'&&bracket.top()=='('))
                {
                   bracket.pop();
                }
                else if(!bracket.empty()&&(a[i]==']'&&bracket.top()=='['))
                {
                    bracket.pop();
                }
                else
                    bracket.push(a[i]);
            }
            if(bracket.empty())
                printf("Yes\n");
            else
                printf("No\n");

    }
    return 0;
}
