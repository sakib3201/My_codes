#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1,sum,n;

    while(scanf("%d",&num))
    {
    if(num==0)
        break;
    else if(num<10)
        printf("%d",num);
    else
    {
    while(num>9)
    {
    sum=0;
    while (num!=0)
    {
        n=num%10;
        num=num/10;
        sum=sum+n;
    }
    num=sum;
    }
    printf("%d\n",sum);
    }
    }
    return 0;
}
