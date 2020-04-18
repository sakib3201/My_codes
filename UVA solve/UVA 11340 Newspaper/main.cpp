#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case,num_pay,letter_pay[256]={},num_line,chi,w,line_len,total=0;
    static char line[10000];
    char ch,cht;
    int i,j,k;
    float t;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d",&num_pay);
        for(i=0;i<256;i++)
        {
            letter_pay[i]=0;
        }
        for(i=0;i<num_pay;i++)
        {
            cin>>ch>>w;
            chi=(int)ch;
            letter_pay[chi]=w;
        }
        scanf("%d%*c",&num_line);
        total=0;
        for(i=0;i<num_line;i++)
          {
              gets(line);
              line_len=strlen(line);
              for(j=0;j<line_len;j++)
              {
                  ch=line[j];
                  chi=ch;
                  total+=letter_pay[chi];
              }

          }
        t=total/100.0;
        printf("%.2f$\n",t);
    }
    return 0;
}
