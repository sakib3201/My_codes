#include <bits/stdc++.h>

using namespace std;

int main()
{
    int seq[3000]={},dif[3000]={},sn,flag=0,i,k;
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&sn)!=EOF)
    {
        for(i=0;i<sn;i++)
        {
            cin>>seq[i];
        }
        for(i=0;i<sn-1;i++)
        {
            k=fabs(seq[i]-seq[i+1]);
            dif[k]=1;
        }
        flag=0;
        for(i=1;i<sn;i++)
        {
            if(dif[i]!=1)
            {
                flag=1;

                break;
            }
        }
        if(flag==1)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
       for(i=0;i<=sn;i++)
       {
           seq[i]=0;
           dif[i]=0;
       }
    }



    return 0;
}
