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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll f[4]={0};
        for(auto it:s)
        {
            if(it!='?')
            {
                f[it-'A']++;
            }
        }
        ll ans=0;
        for(ll i=0; i<4; i++)
        {
            ans += min(n,f[i]);
        }
        cout << ans << endl;
    }
    return 0;
}