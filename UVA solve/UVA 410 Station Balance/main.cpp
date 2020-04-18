#include <bits/stdc++.h>

using namespace std;
bool cmp(int i,int j)
{
    return i>j;
}
int main()
{
    int v[11]= {};
    int chambers,sp_num,setcase=0;
    double avg=10;
    int smalli,lari;
    while(scanf("%d %d",&chambers,&sp_num)==2)
    {
        avg = 0;
        for(int i=0; i<sp_num; i++)
        {
            scanf("%d",&v[i]);
            avg += v[i];
        }
        avg/=(double)chambers;
        double imbalance=0;
        printf("Set #%d\n",++setcase);

        for(int i=sp_num; i<2*chambers; i++)
            v[i]=0;

        sort(v,v+2*chambers);


        for(int i=0; i<chambers; i++)
        {
            printf(" %d:",i);
            if(v[i])
                printf(" %d",v[i]);
            if(v[2*chambers-i-1])
                printf(" %d",v[2*chambers-i-1]);
            printf("\n");
            imbalance+=abs(v[i]+v[2*chambers-i-1]-avg);
        }
        cout<<"IMBALANCE = ";
        cout<<fixed;
        cout<<setprecision(5)<<imbalance<<'\n';
        printf("\n");
        for(int i=0; i<11; i++)
            v[i]=0;
    }

    return 0;
}
