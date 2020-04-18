#include <iostream>

using namespace std;

int main()
{
    int a, b, testcase;

    cin>>testcase;

    for(int i=0; i<testcase; i++)
    {
        cin>>a>>b;
        if(b%a==0)
            cout<<a<<" "<<b<<'\n';
        else
            cout<<-1<<'\n';
    }
    return 0;
}
