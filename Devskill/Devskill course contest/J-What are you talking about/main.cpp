#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string word,engword,marsword;
    map<string,string>m;
    cin>>word;
    while(1)
    {
        cin>>engword;
        if(engword=="END")
            break;
        cin>>marsword;
        m[marsword]=engword;
    }
    cin>>word;
    getchar();
    word="";
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if(ch>='a'&&ch<='z')
            word=word+ch;
        else if(m.count(word)==1)
        {
            cout<<m[word]<<ch;
            word="";
        }
        else if(ch>='A'&&ch<='Z')
            break;
        else
        {
            cout<<word<<ch;
            word="";
        }

    }
    return 0;
}
