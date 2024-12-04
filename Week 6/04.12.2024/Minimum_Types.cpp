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
        ll n, x;
        cin >> n >> x;
        vector<pair<ll, ll>> coins(n);

        for (int i = 0; i < n; i++)
        {
            cin >> coins[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i].second;
        }
        sort(coins.rbegin(), coins.rend());
        ll total = 0;
        int d = 0;

        for (int i = 0; i < n; i++)
        {
            if (total >= x)
                break;

            ll value = coins[i].first;
            ll count = coins[i].second;

            ll m = min(count, (x - total + value - 1) / value);
            total += m * value;

            if (m > 0)
            {
                d++;
            }
        }

        if (total >= x)
        {
            cout << d << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
