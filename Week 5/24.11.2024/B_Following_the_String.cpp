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
        vector<int>v(n);
        string s = "abcdefghijklmnopqrstwxyz";
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]= 0;
        }
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            for(auto it:mp)
            {
                if(it.second == v[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}