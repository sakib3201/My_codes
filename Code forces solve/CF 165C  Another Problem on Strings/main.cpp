#include <bits/stdc++.h>

using namespace std;
int main(void)
{

    long long k;
    string s;
    cin >> k >> s;
    long long n = s.size();
    vector<long long> pos(n + 1,0);
    pos[0] = 1;
    long long ones = 0,output = 0;

    for(long long p = 0; p < n; p++)
    {
        if(s[p] == '1')
        {
            ++ones;
        }
        if(ones >= k)
        {
            output += pos[ones-k];
        }
        ++pos[ones];
    }
    cout << output << endl;
    return 0;
}
