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
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int s=min(mp[0],mp[1]);
        int ans=min(s,n/2);
        cout << ans << endl;
    }
    return 0;
}