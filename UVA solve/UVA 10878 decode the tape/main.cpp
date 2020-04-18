#include <bits/stdc++.h>

using namespace std;

int main()
{
    char l[12],k;
    int brk_flag=0,number[12]= {},num_sum=0,i,y;

    while(1)
    {
        gets(l);
        if(l[0]=='_')
        {
            ++brk_flag;
            if(brk_flag==2)
                break;
        }
        else
        {
            for(i=1; i<6; i++)
            {
                if(l[i]=='o')
                    y=1;
                else
                    y=0;
                number[i]=y*(pow(2,(8-i)));
            }
            for(i=7; i<10; i++)
            {
                if(l[i]=='o')
                    y=1;
                else
                    y=0;
                number[i]=y*(pow(2,(9-i)));
            }
            for(i=1; i<10; i++)
            {
                num_sum+=number[i];
            }
            printf("%c",num_sum);
            num_sum=0;

        }

    }
    return 0;
}
