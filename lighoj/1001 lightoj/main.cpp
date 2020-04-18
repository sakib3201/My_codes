#include <iostream>

using namespace std;

int main()
{
    int testcase,x;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++)
    {
        scanf("%d",&x);
        printf("%d %d\n",x/2,x-(x/2));
    }
    return 0;
}
