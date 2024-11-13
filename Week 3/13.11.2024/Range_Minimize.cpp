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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        if(n<=3)
        {
            cout << 0 << endl;
            continue;
        }
        sort(v.begin(),v.end());
        int lastTwo = v[n-3]-v[0];
        int firstTwo = v[n-1]-v[2];
        int ot = v[n-2]-v[1];

        int ans = min(lastTwo,firstTwo);
        ans = min(ans,ot);
        cout << ans << endl;
    }
    return 0;
}