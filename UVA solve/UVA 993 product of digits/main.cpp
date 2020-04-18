#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase, input,undivisable=0;
    scanf("%d",&testcase);
    vector<int>v;
    while(testcase--)
    {
        scanf("%d",&input);
        undivisable=0;
        if(input==1)
            cout<<1<<'\n';
        else
        {
            undivisable=0;
            bool flag=true;
            while(input>1)
            {
                flag=true;
                for(int i = 9; i>1; i--)
                {
                    if(input%i==0)
                    {
                        flag=false;
                        v.push_back(i);
                        input/=i;
                    }
                }
                if(flag&&input>9)
                {
                    undivisable=1;
                    break;
                }
            }
            if(undivisable)
                cout<<-1<<'\n';
            else
            {
               for(int i = v.size()-1;i>=0;i--)
                cout<<v[i];
                cout<<'\n';
            }
            v.clear();
        }
    }

    return 0;
}
