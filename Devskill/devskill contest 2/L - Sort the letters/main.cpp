#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word,sorted_word,reversed_word;
    cin>>word;
    sort(word.begin(),word.end());
    cout<<word<<'\n';
    reverse(word.begin(),word.end());
    cout<<word<<'\n';
    return 0;
}
