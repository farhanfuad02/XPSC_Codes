#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int count(string s)
{
    int inversion = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = i + 1; j < s.size(); ++j)
        {
            if (s[i] == '1' && s[j] == '0')
            {
                inversion++;
            }
        }
    }
    return inversion;
}

bool val(string s, int x, int k)
{
    int inversion = count(s);
    return inversion >= 0 && inversion <= x && inversion % k == 0;
}

int ans(string s, int x, int k)
{
    if (s.empty())
    {
        return 0;
    }

    int minOps = INT_MAX;
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = i; j < s.size(); ++j)
        {
            string sub = s.substr(i, j - i + 1);

            if (val(sub, x, k))
            {
                string rem = s.substr(0, i) + s.substr(j + 1);
                int ops = 1 + ans(rem, x, k);
                minOps = min(minOps, ops);
            }
        }
    }
    return minOps;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        int result = ans(s, x, k);
        cout << result << endl;
    }
    return 0;
}