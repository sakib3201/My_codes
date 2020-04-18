#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,carryno=0,carry=0,tmp;
    while(1)
    {
        cin>>x>>y;
        if(x==0&&y==0)
            break;
        if(x<y)
        {
            tmp=x;
            x=y;
            y=tmp;
        }
       while(x>0)
       {
         carry=(x%10)+(y%10)+carry;
         if(carry>=10)
            ++carryno;
         x=x/10;
         y=y/10;
         carry/=10;
       }
       if(carryno==0)
       printf("No carry operation.\n");
       else if(carryno==1)
       printf("1 carry operation.\n");
       else
       printf("%d carry operations.\n",carryno);
       carryno=0;
       carry=0;


    }
    return 0;
}
