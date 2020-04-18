#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,p,s,i,j,w,a;
    float n;
    string s1,s2;
    int test;
    cin>>test;
    for(i=0; i<test; i++)
    {
        s2.clear();
        w=0;
        cin>>n;
        cin>>r>>p>>s;
        cin>>s1;
        a=s1.length();
        for(j=0; j<a; j++)
        {
            if(s1.at(j)=='R')
            {
                if(p!=0)
                {
                    ++w;
                    --p;
                    s2.append("P");
                }
                else if(r!=0)
                {
                    --r;
                    s2.append("R");
                }
                else
                {
                    --s;
                    s2.append("S");
                }
            }
                if(s1.at(j)=='P')
                {
                    if(s!=0)
                    {
                        ++w;
                        --s;
                        s2.append("S");
                    }
                    else if(p!=0)
                    {
                        --p;
                        s2.append("P");
                    }
                    else
                    {
                        --r;
                        s2.append("R");
                    }
                }
                    if(s1.at(j)=='S')
                    {
                        if(r!=0)
                        {
                            ++w;
                            --r;
                            s2.append("R");
                        }
                        else if(s!=0)
                        {
                            --s;
                            s2.append("S");
                        }
                        else
                        {
                            --p;
                            s2.append("P");
                        }
                    }
            }
             float b;
              b=round(n/2.0);
              if(w>=b)
                cout<<"YES"<<'\n'<<s2<<'\n';
              else
                cout<<"NO"<<'\n';

        }
            return 0;

    }
