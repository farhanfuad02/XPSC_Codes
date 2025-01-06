#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isValid(ll x, ll y, ll k)
{
    return y >= k * (x - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll low = 0, high = y / (x - 1), ans = 0;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            if (isValid(x, y, mid))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
