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
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            int v;
            cin >> v;
            mp[v]++;
        }
        priority_queue<int>pq;
        for(auto [x,y] : mp)
        {
            pq.push(y);
        }
        while(!pq.empty())
        {
            if(pq.size()<2)break;
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--,y--;
            if(x>=1)pq.push(x);
            if(y>=1)pq.push(y);
        }
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}