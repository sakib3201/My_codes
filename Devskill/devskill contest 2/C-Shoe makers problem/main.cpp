#include <bits/stdc++.h>

using namespace std;
struct work{
    int id;
    int day;
    int penalty;

} work[1001];
bool cmp(struct work work1,struct work work2)
{
    return work1.day*work2.penalty<work2.day*work1.penalty;
}
int main()
{
    freopen("output.txt","w",stdout);
    int testcase,n;
    scanf("%d",&testcase);
    while(testcase--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&work[i].day,&work[i].penalty);
            work[i].id=i+1;
        }
        stable_sort(work,work+n,cmp);
     printf("%d",work[0].id);
     for(int i=1;i<n;i++)
     {
      printf(" %d",work[i].id);
     }
     printf("\n");
     if(testcase)
        printf("\n");
    }

    return 0;
}
