#include <iostream>

using namespace std;

int used[1002]={};
bool dekhsi(int k){
    for(int i=1;i<=k;i++)
    {
        if(used[i]<=0)
            return false;
    }
    return true;
}

int main()
{
    static int a[1000000];
    int k,n,m,testcase,cas=0;
    cin>>testcase;

    while(testcase--){
    scanf("%d %d %d",&n,&m,&k);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    for(int i=3;i<n;i++)
    {
        a[i]=((a[i-1]+a[i-2]+a[i-3])%m)+1;
    }
    for (int i = 0; i < 105; i++)
			used[i] = 0;
    int tail= 0,head=0,minimum = 1000001;
    used[a[head]]++;

    while(1)
    {
        if(dekhsi(k))
        {
           if((head - tail+1)<minimum)
           {
               minimum = head - tail + 1;
           }
           if(a[tail]<=k)
             used[a[tail]]--;
           tail++;
        }
        else
        {
            head++;
            if(head<n)
            {
                if(a[head]<=k)
                    used[a[head]]++;
            }
            else
                break;
        }

    }
    cas++;
    cout<<"Case "<<cas<<": ";
    if(minimum==1000001)
        cout<<"sequence nai\n";
    else
        printf("%d\n",minimum);

    }
    return 0;
}
