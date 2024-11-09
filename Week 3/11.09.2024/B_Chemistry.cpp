#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<char,int>a, pair<char,int>b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        int c = 0;
        for(auto it : mp)
        {
            if(it.second%2==1)c++;
        }
        if(c<=k && (n-k)%2==c%2)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}