#include <iostream>

using namespace std;

int main()
{
    long long int i,total=1,n;
    while(1)
    {
        scanf("%lld",&n);
        if(n<0)
            break;

      total=1+(n*(n+1))/2;
      printf("%lld\n",total);
    }
    return 0;
}
