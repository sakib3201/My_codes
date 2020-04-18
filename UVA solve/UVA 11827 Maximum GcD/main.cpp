#include <bits/stdc++.h>

using namespace std;
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);

}
int main()
{
    string line;
    int a[100],t,k=1,gcd=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,line);
        stringstream ss(line);
        k=0;
        while(ss>>a[k])
           {
               k++;
           }
        gcd=0;
        for(int i=0;i<k-1;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                gcd=max(gcd,GCD(a[i],a[j]));
            }
        }
        cout<<gcd<<'\n';

    }

    return 0;
}
