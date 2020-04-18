#include <bits/stdc++.h>

using namespace std;

int main()
{
    char req[81], name[81], rfp[] = {"RFP #"};
    int n, p, rec, s = 0;
    double max_price = 1e10, mrec = 0, prc, temp;

    while(cin >> n >> p)
    {
        if (s++)
            if (n) cout << "\n\n";
            else  break;

        cin.ignore(100, '\n');
        for (int t = 0; t < n; ++t)
            cin.ignore(100, '\n');

        while(p--)
        {
            cin.getline(&req[0], 81, '\n');
            cin >> prc >> rec;
            temp = (double)rec / n;
            if (temp > mrec || (temp == mrec && prc < max_price))
            {
                strcpy(&name[0], &req[0]);
                mrec = temp;
                max_price = prc;
            }

            cin.ignore(100, '\n');
            while(rec--) cin.ignore(100, '\n');
        }

        max_price = 1e10;
        mrec = 0;
        cout << rfp << s << '\n' << name;
    }
    cout << '\n';
    return 0;
}
