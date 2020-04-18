#include <bits/stdc++.h>

using namespace std;

int main()
{
    char b[35]= {'A',' ',' ',' ','3',' ',' ','H','I','L',' ','J','M',' ','O',' ',' ',' ','2','T','U','V','W','X','Y','Z','1','S','E',' ','Z',' ',' ','8',' '};
    char s[20]= {},temp[20]= {};

    int i,siz,k,l,p_flag=0,m_flag=0,j;
    while(scanf("%s",&s)!=EOF)
    {

        k=strlen(s);
        p_flag=0;
        m_flag=1;
        strcpy(temp,s);

        reverse(&s[0],&s[k]);
        if(strcmp(s,temp)==0)
            p_flag=1;
        for(i=0;i<k;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                j=s[i]-'A';
            else
                j=26+(s[i]-'1');

            if(temp[i]!=b[j])
            {
                m_flag=0;
                break;
            }
        }
        if(p_flag==1 && m_flag==1 )
            printf("%s -- is a mirrored palindrome.\n\n",temp);
        else if(p_flag==1 && m_flag==0 )
            printf("%s -- is a regular palindrome.\n\n",temp);
        else if(p_flag==0 && m_flag==1 )
            printf("%s -- is a mirrored string.\n\n",temp);
        else if(p_flag==0 && m_flag==0 )
            printf("%s -- is not a palindrome.\n\n",temp);
    }
    return 0;
}
