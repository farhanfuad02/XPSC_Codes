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
        ll a = 0, b = 0;
        ll wa = 0, wb = 0;
        vector<ll> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > v2[i])
                a++;
            else if (v1[i] < v2[i])
                b++;
        }
        if (a > b)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v1[i] < v2[i])
                {
                    ll d = v2[i] - v1[i];
                    x -= d+1;
                }
                else if(v1[i]==v2[i])
                {
                    x -= 1;
                }
            }
            if(x==0)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}