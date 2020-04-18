#include <iostream>
using namespace std;
int main()
{
    int cas,crak,i,x,y,z1=0,z2=0,flag=0;
    scanf("%d",&cas);
    while(cas--)
    {
        flag=0;
        scanf("%d",&crak);
        for(i=0; i<crak; i++)
        {
            scanf("%d %d",&x,&y);
            if(i==0)
                z1=abs(x-y);
            z2=abs(x-y);
            if(z1!=z2)
                flag=1;
        }
        if(flag==0)
            {
                printf("yes\n",cas);
                if(cas!=0)
                    printf("\n");
            }
        else
            {
                printf("no\n",cas);
                if(cas!=0)
                    printf("\n");
            }
    }
    return 0;
}
