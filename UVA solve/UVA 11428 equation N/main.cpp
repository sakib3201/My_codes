#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n,x,x1,y1,y,z;

    scanf("%d",&n);
    x=pow(n,(1/3.0));
    printf("x--%d\n",x);
    ++x;
    y=x-1;
    x1=pow(x,3);
    printf("x1==%d\n",x1);
    y1=pow(y,3);
    z=x1-y1;
    if(z>n)
        printf("impossible\n");
    else if(z==n)
        printf("%d %d\n",x,y);

    return 0;
}
