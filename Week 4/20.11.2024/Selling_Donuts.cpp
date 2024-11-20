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
        int n,m;
        cin >> n >> m;
        vector<int>v1(n+1);
        vector<int>v2(m+1);
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            cin >> v1[i];
        }
        for(int i=1; i<=m; i++)
        {
            cin >> v2[i];
        }
        for(int i=1; i<=m; i++)
        {
            if(v1[v2[i]]>0)
            {
                v1[v2[i]]--;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}