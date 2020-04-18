#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,num,element[1001]= {},j,len;
    stack <int> train;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(1)
    {
        cin>>num;
        if(num==0)
            break;
        while(1)
        {
            cin>>element[1];
            if(element[1]==0)
            {
                cout<<'\n';
                break;
            }
            for(i=2; i<=num; i++)
            {
                cin>>element[i];
            }
            j=1;
            int c_train=1;
            while(c_train<=num)
            {
                train.push(c_train);
                while(!train.empty()&& train.top()==element[j])
                {
                    train.pop();
                    j++;
                    if(j>num)
                        break;
                }
                c_train++;
            }

            if(train.empty())
                cout<<"Yes"<<'\n';
            else
                cout<<"No"<<'\n';
            while(!train.empty())
                train.pop();
        }
    }


    return 0;
}
