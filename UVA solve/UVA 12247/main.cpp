#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p1[3],p2[2],i,j,k,l,l_c,z_index,start_count;
    int deck[53]={};


    while((scanf("%d %d %d %d %d",&p1[0],&p1[1],&p1[2],&p2[0],&p2[1]))&&(p1[0]!=0))
    {
        deck[p1[0]]=1;
        deck[p1[1]]=1;
        deck[p1[2]]=1;
        deck[p2[0]]=1;
        deck[p2[1]]=1;

        sort(p1,p1+3);
        sort(p2,p2+2);
        l=0;
        l_c=0;
        for(i=0;i<3;i++)
        {
          if(p2[1]<p1[i])
          {
              p1[i]=0;
              ++l;
              ++l_c;
              break;
          }
        }
        if(l==0)
            p1[0]=0;
        l=0;
        for(i=0;i<3;i++)
        {
          if(p2[0]<p1[i])
          {
              p1[i]=0;
              ++l;
              ++l_c;
              break;
          }
        }
        int mini=55;
        if(l==0)
        {
            for(i=0;i<3;i++)
            {
                if(p1[i]<mini&&p1[i]!=0)
                {
                    mini=p1[i];
                    z_index=i;
                }
            }
            p1[z_index]=0;
        }
        start_count=1;
        if(l_c>0)
        {
            for(i=0;i<3;i++)
            {
                if(p1[i]!=0)
                {
                    start_count=p1[i];
                    break;
                }
            }
        }
        while(deck[start_count]==1&&start_count<53)
        {
            start_count++;
        }
        if(l_c==2||start_count>52)
            printf("-1\n");
        else
            printf("%d\n",start_count);
            l_c=0;
            for(i=0;i<=53;i++)
                deck[i]=0;
    }

    return 0;
}
