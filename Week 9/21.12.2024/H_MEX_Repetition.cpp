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
        ll n,k;
        cin >> n >> k;
        ll total = n*(n+1)/2;
        ll sum = 0;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        v.push_back(total-sum);
        k=k%(n+1);
        for(int i=0; i<n; i++)
        {
            cout << v[(i-k+n+1)%(n+1)] << " ";
        }
        cout << endl;
    }
    return 0;
}