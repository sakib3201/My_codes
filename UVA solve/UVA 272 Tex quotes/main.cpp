#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if((c=='"')&&(i==0))
        {
            printf("``");
            i=1;
        }
        else if ((c=='"')&&(i==1))
        {
            printf("''");
            i=0;
        }
        else
        {
            printf("%c",c);
        }


    }

    return 0;
}
