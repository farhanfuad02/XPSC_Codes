#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s[n];
    map<string,bool>mp;
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        mp[s[i]] = false;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(!mp[s[i]])
        {
            cout << s[i].substr(s[i].size()-2,2);
            mp[s[i]] = true;
        }
    }
    return 0;
}