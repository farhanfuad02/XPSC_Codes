#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int>m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x; 
        m.insert(x);
    }
    int ans=0,day=1;
    while(!m.empty())
    {
        auto it = m.lower_bound(day);
        if(it!=m.end())
        {
            ans++;
            m.erase(it);
        }
        else break;
        day++;
    }
    cout << ans << endl;
    return 0;
}