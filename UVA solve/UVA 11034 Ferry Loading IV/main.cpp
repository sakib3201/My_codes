#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int>ql,qr;
    int cas,len,car_num,q_len,car_l,trip=0;
    char s[7]= {};
    bool bank = false;
    scanf("%d",&cas);
    for(int k=0; k<cas; k++)
    {
        scanf("%d %d",&len,&car_num);
        len=len*100;
        for(int c=0; c<car_num; c++)
        {
            scanf("%d %s",&car_l,&s);

            if(s[0]=='l')
                ql.push(car_l);
            else
                qr.push(car_l);
        }
        trip=0;
        bank = false;
        while(!ql.empty()||!qr.empty())
        {
            trip++;
            q_len=0;
            if(bank)
            {
                while(!qr.empty()&&(q_len+qr.front()<=len))
                {
                    q_len+=qr.front(),qr.pop();
                }
            }
            else
            {
                while(!ql.empty()&&(q_len+ql.front()<=len))
                {
                    q_len+=ql.front(),ql.pop();
                }
            }
            bank=1-bank;
        }
        cout<<trip<<'\n';
    }
    return 0;
}
