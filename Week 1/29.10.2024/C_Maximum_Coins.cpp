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
        int n,x;
        cin >> n >> x;
        vector<ll>v(n+1);
        for(int i=1; i<=n; i++)
        {
            v[i] = pow(2,i);
        }
        ll result1=0,result2=0,result=0;
        for(int i=n; i>n-x; i--)
        {
            result1 += v[i];
        }
        for(int i=1; i<=n-x; i++)
        {
            result2 += v[i];
        }
        cout << (result1-result2) << endl;
    }
    return 0;
}