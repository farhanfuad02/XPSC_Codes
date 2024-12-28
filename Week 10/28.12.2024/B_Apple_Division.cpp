#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; 
    }

    ll total = 0;
    for (int w :v)
    {
        total += w; 
    }

    ll mn_diff = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        ll subset_sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subset_sum +=v[j];
            }
        }

        
        ll diff = abs(total - 2 * subset_sum);
        mn_diff = min(mn_diff, diff);
    }

    cout << mn_diff << endl ;
    return 0;
}
