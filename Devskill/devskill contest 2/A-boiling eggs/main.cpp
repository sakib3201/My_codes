#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int test,num_egg,w_egg,max_egg,egg[31]={};
    cin>>test;
    while(test--)
    {
        int t_weight=0,coun=0;
        cin>>num_egg>>max_egg>>w_egg;
        for(int i = 0;i<num_egg;i++)
            cin>>egg[i];
        sort(begin(egg),begin(egg)+num_egg);
        for(int i=0;i<num_egg;i++)
        {
            t_weight+=egg[i];
            if((i>=max_egg)||(t_weight>w_egg))
                break;
            ++coun;

        }
        static int cas=1;
        cout<<"Case "<<cas<<": "<<coun<<endl;
        ++cas;
    }

    return 0;
}
