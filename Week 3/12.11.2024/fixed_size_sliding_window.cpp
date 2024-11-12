#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int l=0,r=0,ans=0,sum=0;
    while(r<n)
    {
        sum += v[r];
        if(r-l+1==k)
        {
            ans = max(ans,sum);
            sum -= v[l];
            l++,r++;
        }
        else r++;
    }
    cout << ans << endl;
    return 0;
}