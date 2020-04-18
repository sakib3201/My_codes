#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,string> dictionary;
    string line,englishword,babelword;

    while(getline(cin,line),line!="")
    {
        stringstream line_to_words(line);
        line_to_words >> englishword >> babelword;
        dictionary[babelword] = englishword;
    }

    while(getline(cin,line),line != "")
    {
        if(dictionary.find(line)!=dictionary.end())
            cout<<dictionary[line]<<endl;
        else
            cout<<"eh"<<'\n';
    }
    return 0;
}
