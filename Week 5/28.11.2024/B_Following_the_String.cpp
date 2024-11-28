#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]] = 0;
        }
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            for(auto x : mp)
            {
                if(x.second == v[i])
                {
                    cout << x.first;
                    mp[x.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}