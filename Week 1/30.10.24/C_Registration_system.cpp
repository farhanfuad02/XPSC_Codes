#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,int>mp;
    
    while(n--)
    {
        string s;
        cin >> s;
        //int c = 0;
        if(mp.find(s)==mp.end())
        {
            mp.insert({s,1});
            cout << "OK" << endl;
        }
        else
        {
            cout << s << mp[s]++ << endl;
        }
    }
    return 0;
}