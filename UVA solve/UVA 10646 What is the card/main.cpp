#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cas,i,j,nt,x,y,cr,t_cr=0,k,l;
    string a[53];

    scanf("%d",&cas);
    for(l=1; l<=cas; l++)
    {
        for(i=1; i<=52; i++)
        {
            cin>>a[i];
        }
        nt = 27;
        t_cr=0;
        y=0;
        for(i=0; i<3; i++)
        {
            if(a[nt].at(0)>='2'&&a[nt].at(0)<='9')
            {
                x=a[nt].at(0)-'0';
            }
            else
                x=10;

            cr=11-x;
            t_cr+=cr;
            nt=nt-cr;
            y=y+x;
        }
        int start_jump;
        start_jump=28-t_cr;
        k=0;
        for(i=0; i<y; i++)
        {
            if(k==start_jump)
            {
                k=28;
            }
            k++;
        }

        cout<<"Case "<<l<<':'<<" "<<a[k]<<'\n';

    }
    return 0;
}
