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
        vector<int>v(n+1);
        set<int>st;
        for(int i=1; i<=n; i++)
        {
            cin >> v[i];
        }
        for(int i=1; i<=n; i++)
        {
            st.insert(i);
        }
        int l=1,r=n;
        bool flag;
        while(l<r)
        {
            int mn = *st.begin();
            int mx = *st.rbegin();
            flag = false;
            if(v[l]==mn || v[l]==mx)
            {
                st.erase(v[l]);
                l++;
                flag = true;
            }
            if(v[r]==mn || v[r]==mx)
            {
                st.erase(v[r]);
                r--;
                flag = true;
            }
            if(!flag)break;
        }
        if(r>l)cout << l << " " << r << endl;
        else cout << -1 << endl;
    }
    return 0;
}