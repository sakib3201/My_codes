#include <bits/stdc++.h>

using namespace std;

 struct p{
      int x1;
      int y1;

      }point[1000000];

bool cmp(p s1,p s2)
{
    if(s1.x1>s2.x1)
        return false;
    else if(s1.x1==s2.x1&&s1.y1<s2.y1)
        return false;
    else
        return true;

}
int main()
{
    int t,n,x,y;

    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&point[i].x1,&point[i].y1);
    }
    sort(point,point+n,cmp);
     for(int i=0;i<n;i++)
    printf("%d %d\n",point[i].x1,point[i].y1);
    }

    return 0;
}
