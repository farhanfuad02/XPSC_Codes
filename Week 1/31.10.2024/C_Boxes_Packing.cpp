#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx = max(mx,mp[v[i]]);
    }
    cout << mx << endl;
    return 0;
}