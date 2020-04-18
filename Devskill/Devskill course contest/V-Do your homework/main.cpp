#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t,q,timeleft,ntime;
    string sub;
    map<string,int>m;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
        m.clear();
        scanf("%d",&q);
        getchar();
        while(q--)
        {
            cin>>sub>>ntime;
            m[sub]=ntime;
        }
        cin>>timeleft;

        cin>>sub;

        if((m.count(sub)==0)||(m[sub]>(timeleft+5)))
        {
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
        }
        else if(m[sub]<=timeleft)
            cout<<"Case "<<i<<": Yesss"<<endl;
        else if(m[sub]<=timeleft+5)
            cout<<"Case "<<i<<": Late"<<endl;

    }
    return 0;
}
