#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int>v(n+1),x(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    set<int>st;
    for(int i=n; i>=1; i--)
    {
        st.insert(v[i]);
        x[i] = st.size();
    }
    for(int i=1; i<=m; i++)
    {
        int m;
        cin >> m;
        cout << x[m] << endl;
    }
    return 0;
}