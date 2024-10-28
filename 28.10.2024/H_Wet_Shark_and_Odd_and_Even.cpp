#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n==0)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<ll> v(n),pre(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for(int i=1; i<n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    ll m = -1;
    for(int i=0; i<n; i++)
    {
        if(pre[i]>m && pre[i]%2==0)
        {
            m = pre[i];
        }
    }
    cout << (m==-1 ? 0 : m) << endl;
    return 0;
}