#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;

        int mn = INT_MAX;
        int d2 = stoi(k);
        string temp;

        if (s.find(k) != string::npos)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i <= n - m; i++)
            {
                int d1 = stoi(s.substr(i, m));
                if (abs(d1 - d2) < mn)
                {
                    mn = abs(d1 - d2);
                    temp = to_string(d1);
                }
            }

            int total = 0;
            for (int i = 0; i < m; i++)
            {
                int diff = abs(temp[i] - k[i]);
                total += min(diff, 10 - diff);
            }

            cout << total << endl;
        }
    }

    return 0;
}