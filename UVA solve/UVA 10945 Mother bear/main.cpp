#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,c;
while(getline(cin,a))
{
    if(a == "DONE")
       break;

    string y = "";
    for(int i=0; i<a.size(); i++)
        if(isalpha(a[i]))
            y+= tolower(a[i]);

    c = y;
    reverse(y.begin(), y.end());
    if(c == y)
      printf("You won't be eaten!\n");
    else
        printf("Uh oh..\n");
}
    return 0;
}
