#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int>v(n),ans;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int l=0,r=0;
    queue<int>q;
    while(r<n)
    {
        if(v[r]<0)q.push(v[r]);
        if(r-l+1==k)
        {
            if(!q.empty())
            {
                ans.push_back(q.front());
                if(v[l]==q.front())
                {
                    q.pop();
                }
            }
            else ans.push_back(0);
            l++,r++;
        }
        r++;
    }
    for(auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}