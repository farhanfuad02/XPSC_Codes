#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for(auto m : v)
        {
            if(k<=m && m%k<ans)
            {
                ans = m%k;
            }
        }
        if(ans==INT_MAX)cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}