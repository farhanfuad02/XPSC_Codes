#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin >> n >> q;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    for(int i=0; i<q; i++)
    {
        int key,l=0,r=n-1,mid,ans=-1;
        cin >> key;
        while(l<=r)
        {
            mid = l+(r-1)/2;
            if(key==v[mid])
            {
                ans = mid;
                r = mid-1;
            }
            else if(key<v[mid])
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}