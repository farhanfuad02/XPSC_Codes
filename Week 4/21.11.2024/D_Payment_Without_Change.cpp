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
        ll a,b,n,k;
        cin >> a >> b >> n >> k;
        
        ll x = k%n;
        if(x<=b && a*n+b>=k)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}