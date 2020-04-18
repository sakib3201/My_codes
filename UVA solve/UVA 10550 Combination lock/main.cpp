#include <bits/stdc++.h>

using namespace std;

int main()
{
    int intial,c1,c2,c3,total=0;

    while(1)
    {
        scanf("%d %d %d %d",&intial,&c1,&c2,&c3);

        if((c1==0)&&(c2==0)&&(c3==0)&&(intial==0))
            break;

        total=0;

        if(intial<c1)
            total+=((intial-c1+40)*9);
        else
            total+=((intial-c1)*9);

        if(c2<c1)
            total+=((c2-c1+40)*9);
        else
            total+=((c2-c1)*9);

        if(c3>c2)
            total+=(c2-c3+40)*9;
        else
            total+=((c2-c3)*9);

        total+=1080;

        printf("%d\n",total);
    }

    return 0;
}
