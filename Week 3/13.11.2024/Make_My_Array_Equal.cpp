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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int gcd = v[0];
        for(int i=1; i<n; i++)
        {
            gcd = __gcd(gcd,v[i]);
        }
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(v[i]%gcd != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}