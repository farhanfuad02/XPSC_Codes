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
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        ll sum=0,total=0;
        for(int i=0; i<n; i++)
        {
            sum += v[i];
            total += abs(sum);
        }
        cout << total << endl;
    }
    return 0;
}