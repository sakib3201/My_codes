#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=1,i,d,sum=0,lim,c=0;

    while(1)
    {

        scanf("%d",&n);
        if(c==0)
        {
        printf("PERFECTION OUTPUT\n");
        ++c;
        }
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        lim=sqrt(n);
        for(i=2;i<=lim;i++)
        {
            if(n%i==0)
            {
                d=n/i;
                if(d!=i)
                sum=sum+i+d;
                else
                    sum=sum+i;
            }
        }
        if(n!=1)
        ++sum;
        if(sum==n)
            printf("%5.d  PERFECT\n",n);
        else if(sum<n)
            printf("%5.d  DEFICIENT\n",n);
        else if(sum>n)
            printf("%5.d  ABUNDANT\n",n);
        sum=0;
    }
    return 0;
}
