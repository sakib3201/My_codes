#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<char>text;
    string str;

    while(cin>>str)
    {
       text.clear();
       char ch;
       list<char>::iterator it=text.begin();
       for(char ch:str)
       {
           if(ch=='[')
            it=text.begin();
           else if (ch==']')
            it=text.end();
           else
            text.insert(it,ch);
       }
       for(list<char>::iterator it = text.begin() ; it!=text.end() ;it++)
        cout<<*it;
    cout<<'\n';
    }


    return 0;
}
