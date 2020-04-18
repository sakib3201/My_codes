#include <iostream>

using namespace std;

int main()
{
    int i,n;
    double avrg,m[1001]={},excng,k;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&m[i]);
            avrg+=m[i];
        }
        k=n;
        avrg=avrg/k;
        for(i=0;i<n;i++)
         {
           if(m[i]<avrg)
             excng+=(avrg-m[i]);

         }
       printf("$%.2lf\n",excng);
       excng=0;
       avrg=0;
    }
    return 0;
}
