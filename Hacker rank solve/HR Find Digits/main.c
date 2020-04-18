#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,onum,dig,count=0,i;


    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&onum);
        num=onum;
        while(num!=0)
        {
            dig=num%10;
            num=num/10;
            if(dig!=0)
            {
            if((onum%dig)==0)
                count++;
            }
        }
        printf("%d\n",count);
        count=0;

    }
    return 0;
}
