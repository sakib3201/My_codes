#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int p,c,n;
    int casenumber=1;
    char ch;
    while(1)
    {
        deque<long long int>dq;
        scanf("%lld %lld",&p,&c);
        if(p==0 && c==0)
            break;
        int mi=min(p,c);
        for(int i=1; i<=mi; i++)
        {
            dq.push_back(i);
        }
        printf("Case %d:\n",casenumber);
        ++casenumber;
        char ch[10];
        for(int i=0; i<c; i++)
        {
            scanf("%s",ch);
            if(ch[0]=='N')
            {
                long long int e=dq.front();
                cout<<e<<'\n';
                dq.push_back(e);
                dq.pop_front();
            }
            else
            {
                scanf("%lld",&n);
                for(deque<long long int>::iterator it=dq.begin(); it!=dq.end(); it++)
                {
                    if(*it==n)
                    {
                        dq.erase(it);
                        break;
                    }
                }
                dq.push_front(n);

            }
        }
    }
    return 0;
}
