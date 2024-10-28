#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<bool> vis(26,false);
    for(char x : s)
    {
        vis[x-'a'] = true;
    }
    for(char i='a'; i<='z'; i++)
    {
        if(!vis[i-'a'])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}