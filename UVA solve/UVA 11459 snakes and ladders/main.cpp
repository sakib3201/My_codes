#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pl_num,snl[101]= {},rol_no,test_case,snl_no,temp=0,player=0,roll;
    static int position[1000005]= {};
    int trash;
    int i=0,j,l;
    int win_flag=0;

    scanf("%d",&test_case);

    for(j=0; j<test_case; j++)
    {
        scanf("%d %d %d",&pl_num,&snl_no,&rol_no);
         for(i=0; i<=pl_num; i++)
            position[i]=1;
        for(i=0; i<100; i++)
            snl[i]=0;
        for(i=1; i<=snl_no; i++)
        {
            scanf("%d",&temp);
            scanf("%d",&snl[temp]);
        }
        for(i=1; i<=rol_no; i++)
        {
            player=i%(pl_num);
            if(player==0)
                player=pl_num;

            if(win_flag==0)
            {
                scanf("%d",&roll);
            }
            else
            {
                scanf("%d",&trash);
            }
            if(win_flag==0)
            {
            l=0;
            position[player]+=roll;
            l=position[player];
            if(!(snl[l]==0)&&position[player]<100)
                position[player]=snl[l];
            if(position[player]>=100)
                {
                    win_flag=1;
                    position[player]=100;
                }
            }
        }
        for(i=1; i<=pl_num; i++)
            printf("Position of player %d is %d.\n",i,position[i]);
        win_flag=0;
    }
    return 0;
}
