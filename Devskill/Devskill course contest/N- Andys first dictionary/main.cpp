#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word="";
    char ch;
    set<string>dictionary;
    while(scanf("%c",&ch)!=EOF)
    {

        if((ch>='a'&&ch<='z'))
            word+=ch;
        else if((ch>='A'&&ch<='Z'))
            word+=(ch+32);
        else
        {
            if(word!="")
            dictionary.insert(word);
            word="";
        }
    }
    int siz=dictionary.size();

    for(auto it=dictionary.begin();it!=dictionary.end();++it)
        cout<<*it<<endl;
    return 0;
}
