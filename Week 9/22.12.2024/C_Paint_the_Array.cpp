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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(v[i], g1);
        }
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(v[i], g2);
        }
        ll ans = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i]%g1==0)
            {
                flag = false;
            }
        }
        if (flag)
        {
            ans = g1;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (v[i]%g2==0)
                {
                    flag = false;
                }
            }
            if(flag)
            {
                ans = g2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}