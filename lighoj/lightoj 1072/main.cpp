#include<bits/stdc++.h>
#include<math.h>
using namespace std;

main()
{
    int test;
    double R, r1, r2, n;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        scanf("%lf %lf", &R, &n);
        r1 = (R * sin(acos(-1.0) / n)) / (1 + sin(acos(-1.0) / n));
        r2 = (int)r1;
        if (r1 - r2 == 0.0)
        {
            printf("Case %d: %.0f\n", i, r2);
        }
        else
        {
            printf("Case %d: %.10f\n", i, r1);
        }
    }
    return 0;
}
