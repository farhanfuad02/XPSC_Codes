#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll LCM(ll a,ll b)
{
    return (a/__gcd(a,b))*b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    ll cnt1=(n/a)*p,cnt2=(n/b)*q,overlap=(n/LCM(a,b));
    ll ans = ((cnt1+cnt2)-(overlap*(p+q))) + (overlap*max(p,q));
    cout << ans << endl;
    return 0;
}