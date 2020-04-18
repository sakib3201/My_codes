#include <iostream>

using namespace std;

int main()
 {

    unsigned long long int n,i,s,d,x,y,fi;


    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu %llu",&s,&d);
        if(s<d||(((s+d)%2)!=0)||((s-d)%2!=0))
            printf("impossible\n");
        else
        {
            x=(s+d)/2;
            y=s-x;
            printf("%llu %llu\n",x,y);
        }
    }


    return 0;
}
