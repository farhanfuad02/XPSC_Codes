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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, ans = 0, sum = 0;
        while (r < k)
        {
            if (s[r] == 'W')
                sum++;
            r++;
        }
        ans = sum;
        r--;
        while (r < n - 1)
        {
            r++;
            if (s[r] == 'W')
                sum++;
            if (s[l] == 'W')
                sum--;
            ans = min(ans, sum);
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}