#include<bits/stdc++.h>
using namespace std;

long long int a, b, c, d, e, f,g;

int main() {
    //freopen("output.txt","w",stdout);
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);

    while( cases-- ) {
        scanf("%lld %lld %d %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        if( n == 0 ) g= a;
        if( n == 1 ) g= b;
        if( n == 2 ) g= c;
        if( n == 3 ) g= d;
        if( n == 4 ) g= e;
        if( n == 5 ) g= f;
        for(int i=6;i<=n;i++)
        {
            g=a+b+c+d+e+f;
            g=g% 10000007l;
            a=b;b=c;c=d;d=e;e=f;f=g;
        }
        printf("Case %lld: %lld\n", ++caseno, g% 10000007l);
    }

    return 0;
}
