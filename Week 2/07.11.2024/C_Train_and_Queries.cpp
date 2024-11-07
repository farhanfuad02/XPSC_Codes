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
        int n,k;
        cin >> n >> k;
        map<int,set<int>>mp;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        for(int i=1; i<=k; i++)
        {
            int a,b;
            cin >> a >> b;
            if((mp.find(a)==mp.end()) || (mp.find(b)==mp.end()))
            {
                cout << "NO" << endl;
            }
            else
            {
                int left = *mp[a].begin();
                int right = *mp[b].rbegin();
                if(left < right)cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
        
    }
    return 0;
}