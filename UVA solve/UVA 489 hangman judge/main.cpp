#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w=0,round;
    char input[1000],guess[1000];
    int a[26]={},j=0;
    while(scanf("%d",&round)==1&&round!=-1)
    {
        cin>>input;
        cin>>guess;
        int i_len =strlen(input);
        int g_len =strlen(guess);
        list <char> inlist (&input[0],&input[i_len]);

        for(int i=0; i<g_len; i++)
        {
            if(!inlist.empty())
            {
                j=guess[i]-'a';
                int siz=inlist.size();
                inlist.remove(guess[i]);
                if(siz==inlist.size()&&a[j]!=1)
                   {
                       a[j]=1;
                       ++w;
                   }
                if(a[j]==0)
                    a[j]=1;
            }
            else
               break;

        }
        printf("Round %d\n",round);
        if( inlist.empty() && w<7)
            printf("You win.\n");
        else if (!inlist.empty() && w<7)
            printf("You chickened out.\n");
        else
            printf("You lose.\n");
        j=0;
        w=0;
        int i;
        for(i=0;i<i_len;i++)
            input[i]='\0';
        for(i=0;i<g_len;i++)
            guess[i]='\0';
        for(i=0;i<26;i++)
            a[i]=0;
    }
    return 0;
}
