#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[10000];
    int i=0,word=0;

    while(gets(str))
    {

        for(i=0;str[i]!='\0';i++)
        {
            if(((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))&&(!((str[i+1]>='a'&&str[i+1]<='z')||(str[i+1]>='A'&&str[i+1]<='Z'))))
            ++word;
        }
        i=0;
        printf("%d\n",word);
        word=0;

    }
    return 0;
}
