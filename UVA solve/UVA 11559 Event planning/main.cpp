#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int i,j,num_per,budget,h_num,n_weeks,per_person,week,min_cost=2000000,total_cost=0;
    int sf=0,bf=0;
    while(scanf("%llu %llu %llu %llu",&num_per,&budget,&h_num,&n_weeks)==4)
    {
    for(i=0;i<h_num;i++)
    {

        scanf("%llu",&per_person);
        total_cost=per_person*num_per;
        for(j=0;j<n_weeks;j++)
        {
            scanf("%llu",&week);
            if(week>=num_per)
            {
                sf=1;
            }
        if((sf==1)&&(total_cost<min_cost))
        min_cost=total_cost;
        }


    }
        if(min_cost<=budget)
        printf("%llu\n",min_cost);
        else
        printf("stay home\n");
        sf=0;
        bf=0;
        min_cost=2000000;
    }
    return 0;
}
