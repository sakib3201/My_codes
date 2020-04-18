#include <bits/stdc++.h>

using namespace std;

struct st{
  int value;
  int divisor=0;
};

bool cmp(st a, st b)
{
    if(a.divisor<b.divisor)
        return true;
    else if (a.divisor==b.divisor && a.value>=b.value)
      return true;
      else
        return false;
}

int main()
{
    st s[1001];
    for(int i=1;i<=1000;i++)
    {
         s[i].value=i;
        for(int j=i;j<=1000;j=j+i)
         ++s[j].divisor;
    }
    sort(s,s+1001,cmp);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int p;
        cin>>p;
        printf("Case %d: %d\n",i,s[p].value);
    }
    return 0;
}
