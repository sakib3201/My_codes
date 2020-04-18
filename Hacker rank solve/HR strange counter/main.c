#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,rec_val,tv=1,tvl,cv=3,cvl,count;
    scanf("%lld",&rec_val);
    if(rec_val==1)
        count=3;
    else{
    while(tv<rec_val)
    {
        tvl=tv;
        tv+=cv;
        cvl=cv;
        cv=cv*2;
    }
    i=rec_val-tvl;
    count=cvl-i;
    if(count==0)
        count=cv;
    }
    printf("%lld",count);
    return 0;
}
